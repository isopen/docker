#include <iostream>

#include "MockReflector.h"
#include "tgvoip/VoIPController.h"
#include "tgvoip/audio/AudioInput.h"
#include <openssl/rand.h>
#include "opus/opus.h"
#include "tgvoip/OpusEncoder.h"
#include "tgvoip/OpusDecoder.h"

using namespace tgvoip;

int main() {
    std::cout << "Hello, World!" << std::endl;

    test::MockReflector reflector("127.0.0.1", 1033);
    reflector.Start();

    VoIPController* controller1 = new VoIPController();
    VoIPController* controller2 = new VoIPController();

    std::array<std::array<uint8_t, 16>, 2> peerTags = test::MockReflector::GeneratePeerTags();
    std::vector<Endpoint> endpoints;
    IPv4Address localhost("127.0.0.1");
    IPv6Address emptyV6;
    endpoints.emplace_back(1, 1033, localhost, emptyV6, Endpoint::Type::UDP_RELAY, peerTags[0].data());
    controller1->SetRemoteEndpoints(endpoints, false, 76);
    std::vector<Endpoint> endpoints1;
    endpoints1.emplace_back(1, 1033, localhost, emptyV6, Endpoint::Type::UDP_RELAY, peerTags[1].data());
    controller2->SetRemoteEndpoints(endpoints1, false, 76);

    char encryptionKey[256];
    RAND_bytes((uint8_t *) encryptionKey, sizeof(encryptionKey));
    controller1->SetEncryptionKey(encryptionKey, true);
    controller2->SetEncryptionKey(encryptionKey, false);

    controller1->Start();
    controller2->Start();
    controller1->Connect();
    controller2->Connect();

    sleep (10);

    return 0;
}
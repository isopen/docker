FROM debian:9

RUN apt-get -y update
RUN apt-get install -y g++ ccache openssl cmake gperf make git libssl-dev libreadline-dev zlib1g zlib1g-dev

WORKDIR /
COPY . /td

WORKDIR /td
RUN mkdir build
WORKDIR build
RUN cmake ..
RUN cmake --build .

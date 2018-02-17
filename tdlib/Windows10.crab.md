- [git](https://git-scm.com/)

- <a href="https://www.visualstudio.com/ru/thank-you-downloading-visual-studio/?sku=Community&rel=15">VS 2017</a><br>
Рабочие нагрузки: разработка приложений для универсальной платформы Windows, разработка классических приложений на C++<br>
Языковые пакеты: английский

- <code>git clone https://github.com/Microsoft/vcpkg.git</code><br>
<code>C:\src\vcpkg> .\bootstrap-vcpkg.bat</code><br>
<code>C:\src\vcpkg> .\vcpkg integrate install</code><br>
<code>C:\src\vcpkg> .\vcpkg install openssl zlib</code><br>

- [gperf](https://sourceforge.net/projects/gnuwin32/files/gperf/3.0.1/)<br>
Панель управления->Дополнительные параметры системы->Переменные среды->Системные переменные<br>
Если Path уже есть, то добавить в него путь до gperf.exe. Если нет, то создать Path с маршрутом до gperf.exe<br>
Например: <code>C:\Program Files (x86)\GnuWin32\bin</code><br>
Внимание! Не затрите уже существующие маршруты Path. Были примеры [#20](https://github.com/tdlib/td/issues/20)

- [cmake](https://cmake.org/)<br>
Автоматически пропишется в Path. Если нет, то добавьте путь до cmake в Path.<br>
Например: <code>C:\Program Files (x86)\CMake\bin</code><br>
Несколько маршрутов Path: <code>C:\Program Files (x86)\GnuWin32\bin\;C:\Program Files (x86)\CMake\bin</code>

- Если накосячили и возникают ошибки:<br><br>
Could not find Windows SDK. [Скачать и установить](https://developer.microsoft.com/en-us/windows/downloads/windows-10-sdk)<br><br>
<code>C:\Program Files (x86)\Microsoft Visual Studio\2017\Professional\Common7\IDE\VC\VCTargets\Microsoft.CppCommon.targets(171,5): error MSB6006: "cmd.exe" exited with code 9009. [C:\Users\Aliakbar\Desktop\td-master\td-master\build\tdutils\generate\tdmime_auto.vcxproj]</code> Проверяйте путь до gperf [#20](https://github.com/tdlib/td/issues/20)<br><br>
<code>English language not found.</code> Выберите и установите в VS языковой пакет английского языка [#80](https://github.com/tdlib/td/issues/80)

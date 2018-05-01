Обязательные пакеты

- [git](https://git-scm.com/)<br>
Например: <code>C:\Program Files\Git\bin</code>

- <a href="https://www.visualstudio.com/ru/thank-you-downloading-visual-studio/?sku=Community&rel=15">VS 2017</a><br>
Рабочие нагрузки: <code>разработка приложений для универсальной платформы Windows, разработка классических приложений на C++</code><br>
Языковые пакеты: <code>английский</code>

- <code>git clone https://github.com/Microsoft/vcpkg.git</code><br>
<code>C:\src\vcpkg> .\bootstrap-vcpkg.bat</code><br>
<code>C:\src\vcpkg> .\vcpkg integrate install</code><br>
<code>C:\src\vcpkg> .\vcpkg install openssl zlib</code> и/или <code>.\vcpkg --triplet x64-windows install openssl zlib</code><br>
Например: <code>C:\src\vcpkg</code><br>

- [gperf](https://sourceforge.net/projects/gnuwin32/files/gperf/3.0.1/)<br>
<code>Панель управления->Дополнительные параметры системы->Переменные среды->Системные переменные</code><br>
Если Path уже есть, то добавить в него путь до gperf.exe. Если нет, то создать Path с маршрутом до gperf.exe<br>
Например: <code>C:\Program Files (x86)\GnuWin32\bin</code><br>
Внимание! Не затрите уже существующие маршруты Path. Были примеры [#20](https://github.com/tdlib/td/issues/20)

- [cmake](https://cmake.org/)<br>
Автоматически пропишется в Path. Если нет, то добавьте путь до cmake в Path.<br>
Например: <code>C:\Program Files (x86)\CMake\bin</code><br>
Несколько маршрутов Path: <code>C:\Program Files (x86)\GnuWin32\bin\;C:\Program Files (x86)\CMake\bin</code><br>

Необязательные пакеты

- [readline](https://sourceforge.net/projects/gnuwin32/files/readline/5.0-1/)

- [make](https://sourceforge.net/projects/gnuwin32/files/make/)

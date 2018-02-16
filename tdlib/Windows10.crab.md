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
Если Path уже есть, то добавить в него путь до gperf.exe. Иначе создать Path с маршрутом до gperf.exe<br>
Например: <code>C:\Program Files (x86)\GnuWin32\bin</code><br>
Внимание! Не затрите уже существующие маршруты Path [#20](https://github.com/tdlib/td/issues/20)

- [cmake](https://cmake.org/)<br>
Автоматически пропишется в Path. Если нет, то добавьте путь до cmake в Path.<br>
Например: <code>C:\Program Files (x86)\CMake\bin</code><br>
Несколько маршрутов Path: <code>C:\Program Files (x86)\GnuWin32\bin\;C:\Program Files (x86)\CMake\bin</code>

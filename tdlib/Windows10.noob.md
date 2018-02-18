- [git](https://git-scm.com/)<br>
Например: <code>C:\Program Files\Git\bin</code>

- <a href="https://www.visualstudio.com/ru/thank-you-downloading-visual-studio/?sku=Community&rel=15">VS 2017</a><br>
Рабочие нагрузки: <code>разработка приложений для универсальной платформы Windows, разработка классических приложений на C++</code><br>
Языковые пакеты: <code>английский</code>

- <code>git clone https://github.com/Microsoft/vcpkg.git</code><br>
<code>C:\src\vcpkg> .\bootstrap-vcpkg.bat</code><br>
<code>C:\src\vcpkg> .\vcpkg integrate install</code><br>
<code>C:\src\vcpkg> .\vcpkg install openssl zlib</code> и/или <code>.\vcpkg --triplet x64-windows install openssl zlib</code><br>

- [gperf](https://sourceforge.net/projects/gnuwin32/files/gperf/3.0.1/)<br>
<code>Панель управления->Дополнительные параметры системы->Переменные среды->Системные переменные</code><br>
Если Path уже есть, то добавить в него путь до gperf.exe. Если нет, то создать Path с маршрутом до gperf.exe<br>
Например: <code>C:\Program Files (x86)\GnuWin32\bin</code><br>
Внимание! Не затрите уже существующие маршруты Path. Были примеры [#20](https://github.com/tdlib/td/issues/20)

- [cmake](https://cmake.org/)<br>
Автоматически пропишется в Path. Если нет, то добавьте путь до cmake в Path.<br>
Например: <code>C:\Program Files (x86)\CMake\bin</code><br>
Несколько маршрутов Path: <code>C:\Program Files (x86)\GnuWin32\bin\;C:\Program Files (x86)\CMake\bin</code>

- [readline](https://sourceforge.net/projects/gnuwin32/files/readline/5.0-1/)

<details><summary>Если накосячили</summary><br>
<code>Could not find Windows SDK.  </code> <a href="https://github.com/tdlib/td/issues/20">#20</a> <a href="https://developer.microsoft.com/en-us/windows/downloads/windows-10-sdk">Скачать и установить</a><br>
Переустановить vcpkg и пакеты<br><br>
<code>Could not find Powershell. </code> Прописать в Path.<br>
Например: <code>C:\Windows\syswow64\Windowspowershell\v1.0</code><br><br>
<code>C:\Program Files (x86)\Microsoft Visual Studio\2017\Professional\Common7\IDE\VC\VCTargets\Microsoft.CppCommon.targets(171,5): error MSB6006: "cmd.exe" exited with code 9009. [C:\Users\Aliakbar\Desktop\td-master\td-master\build\tdutils\generate\tdmime_auto.vcxproj]</code> Проверяйте путь до gperf <a href="https://github.com/tdlib/td/issues/20">#20</a><br><br>
<code>English language not found.</code> Выбрать и установить в Visual Studio Installer английский языковой пакет<a href="https://github.com/tdlib/td/issues/80">#80</a><br>
<a href="https://github.com/isopen/docker/edit/master/tdlib/32bit.wbuild.sh">32bit</a><br>
<a href="https://github.com/isopen/docker/edit/master/tdlib/64bit.wbuild.sh">64bit</a></details><br>

<details><summary>Если не помогло</summary>
<ul>
  <li> переустановить windows и попробовать ещё раз</li>
  <li>установить Linux и попробовать простой план с <a href="https://github.com/isopen/docker/tree/master/tdlib">Docker</a></li>
</ul>
Например: ветки Debian, Ubuntu
</details><br>

English [pretdlib](https://medium.com/@mrmakss635/preparing-packages-for-building-tdlib-on-windows-10-b5a4bf7c0815)

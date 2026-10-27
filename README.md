# Independent Windows License Test Lab

A BAT/VBS front end and C++ arithmetic self-test, designed as a safe starting point for an authorized licensing QA assignment. It does **not** generate WinRAR license keys.

## Build
Push these files to GitHub. Under **Actions**, run **Windows build** (or push to trigger it). Download the `license-test-windows` artifact and extract it. Keep `Launch.bat`, `Interface.vbs`, and `build/license-test.exe` in the same relative folders. Double-click `Launch.bat`.

The workflow uses MSVC on GitHub-hosted Windows runners. For locally building, use the Visual Studio Developer Command Prompt: `mkdir build` then `cl /EHsc /std:c++17 /Febuild\license-test.exe src\main.cpp`.

For actual authorized licensing tests, add only publisher-supplied test vectors, permitted keys and specification.

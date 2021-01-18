Entry: 01 Gary Smith "C++ Study pt_1" 2021-01-17

Title: Setup On Windows

Notes:
I first downloads MSYS2. MSYS2 is a executable designed to allow pacman compatibility and C/C++/other language library support through pacman. It also gives the windows system access to build systems once only accessible to linux. 

Next installed executable downloaded from the MSYS2 website and used the command "pacman -S base-devel" to install some general development tools. Then I installed some of the dependces listed on this webpage; "https://developer.gnome.org/gtkmm-tutorial/stable/sec-installation-dependencies.html.en ." I either installed them using the source using the README of each to build them or found them in the MSYS2 package repository. make and meson/ninja build tools were the most used for building projects I couldn't find in the MSYS2 package library.

After downloading, building and install installing the dependices I copied over the files in the mingw64 folder to the user folder. I then proceeeded to create the pt_1 folder setup using the examples of this website for the cmake setup; "https://wiki.gnome.org/Projects/gtkmm/UsingCMake"; and this website for the source file setup; "https://www.gtk.org/docs/language-bindings/cpp/ ."

Finally to build the project I used the series of commands, "'cd build' ," "'cmake ..' ," "'cmake --build .' ."
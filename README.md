# Xposed ImGui Menu

Uses Xposed's ZygoteInit function to inject the menu at runtime
This module works with **LSPatch**

## Cloning:
```
git clone --recursive https://github.com/fedes1to/XposedImGuiMenu.git --depth 1
```

## Important info
This menu implements ImGui, libcURL, openSSL, KittyMemory, Dobby and Keystone
Remember to change the app package name inside the [Inject.java](https://github.com/fedes1to/XposedImGuiMenu/blob/master/app/src/main/java/org/modfs/xposedmenu/Inject.java) file

# Xposed ImGui Menu

Uses Xposed's ZygoteInit function to inject the menu at runtime.

This module works with **[LSPatch](https://github.com/JingMatrix/LSPatch)**, this way you can have stealthy no root injection.

## Cloning:
```
git clone --recursive https://github.com/fedes1to/XposedImGuiMenu.git --depth 1
```

## Important info
This menu implements ImGui, libcURL, openSSL, KittyMemory, Dobby and Keystone.

Remember to change the app package name inside the [Inject.java](https://github.com/fedes1to/XposedImGuiMenu/blob/master/app/src/main/java/org/modfs/xposedmenu/Inject.java) file.

If you want to keep your menu safe from cracking we recommend [Hikari](https://github.com/61bcdefg/Hikari-LLVM15) and header string encryption ([obfusheader](https://github.com/ac3ss0r/obfusheader.h) or [skCrypter](https://github.com/skadro-official/skCrypter) work well)

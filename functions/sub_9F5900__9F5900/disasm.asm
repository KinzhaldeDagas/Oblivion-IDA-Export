0x9F5900: push    offset aPush; "push"
0x9F5905: push    offset aSpccontrolstex; "sPCControlsTextPrefix"
0x9F590A: mov     ecx, offset dword_B38F18
0x9F590F: call    GameSetting_ConstrAndReg
0x9F5914: push    offset sub_A22550; void (__cdecl *)()
0x9F5919: call    _atexit
0x9F591E: pop     ecx
0x9F591F: retn

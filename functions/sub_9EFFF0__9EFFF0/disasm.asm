0x9EFFF0: push    offset aMakeThisMyActi; "Make this my active quest"
0x9EFFF5: push    offset aSswitch; "sSwitch"
0x9EFFFA: mov     ecx, offset dword_B382E8
0x9EFFFF: call    GameSetting_ConstrAndReg
0x9F0004: push    offset sub_A20CF0; void (__cdecl *)()
0x9F0009: call    _atexit
0x9F000E: pop     ecx
0x9F000F: retn

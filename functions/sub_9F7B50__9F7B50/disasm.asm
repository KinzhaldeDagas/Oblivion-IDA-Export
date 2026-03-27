0x9F7B50: push    offset aResetFace?; "Reset face?"
0x9F7B55: push    offset aSresetface; "sResetFace"
0x9F7B5A: mov     ecx, offset dword_B39448
0x9F7B5F: call    GameSetting_ConstrAndReg
0x9F7B64: push    offset sub_A22FB0; void (__cdecl *)()
0x9F7B69: call    _atexit
0x9F7B6E: pop     ecx
0x9F7B6F: retn

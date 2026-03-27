0x9F3190: push    offset aLook; "Look"
0x9F3195: push    offset aSlook; "sLook"
0x9F319A: mov     ecx, offset dword_B38EB8
0x9F319F: call    GameSetting_ConstrAndReg
0x9F31A4: push    offset sub_A22490; void (__cdecl *)()
0x9F31A9: call    _atexit
0x9F31AE: pop     ecx
0x9F31AF: retn

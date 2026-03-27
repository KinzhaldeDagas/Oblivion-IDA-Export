0x9F6990: push    offset aLength; "Length"
0x9F6995: push    offset aSlength; "sLength"
0x9F699A: mov     ecx, offset dword_B38FD8
0x9F699F: call    GameSetting_ConstrAndReg
0x9F69A4: push    offset sub_A226D0; void (__cdecl *)()
0x9F69A9: call    _atexit
0x9F69AE: pop     ecx
0x9F69AF: retn

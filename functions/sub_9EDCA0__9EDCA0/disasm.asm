0x9EDCA0: push    1C824h
0x9EDCA5: push    offset aIclassbard; "iClassBard"
0x9EDCAA: mov     ecx, offset iClassBard
0x9EDCAF: call    GameSetting_ConstrAndReg
0x9EDCB4: push    offset sub_A20020; void (__cdecl *)()
0x9EDCB9: call    _atexit
0x9EDCBE: pop     ecx
0x9EDCBF: retn

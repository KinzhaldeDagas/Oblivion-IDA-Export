0x9EBD40: push    64h ; 'd'
0x9EBD42: push    offset aIcrimedaysinpr; "iCrimeDaysInPrisonMod"
0x9EBD47: mov     ecx, offset dword_B376F0
0x9EBD4C: call    GameSetting_ConstrAndReg
0x9EBD51: push    offset sub_A1F500; void (__cdecl *)()
0x9EBD56: call    _atexit
0x9EBD5B: pop     ecx
0x9EBD5C: retn

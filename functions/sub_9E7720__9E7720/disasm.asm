0x9E7720: push    2710h
0x9E7725: push    offset aIcrimealarmrec; "iCrimeAlarmRecDistance"
0x9E772A: mov     ecx, offset dword_B36A50
0x9E772F: call    GameSetting_ConstrAndReg
0x9E7734: push    offset sub_A1DBC0; void (__cdecl *)()
0x9E7739: call    _atexit
0x9E773E: pop     ecx
0x9E773F: retn

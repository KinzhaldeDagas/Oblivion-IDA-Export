0x9F68D0: push    offset aGender; "Gender"
0x9F68D5: push    offset aSgender; "sGender"
0x9F68DA: mov     ecx, offset dword_B38FA8
0x9F68DF: call    GameSetting_ConstrAndReg
0x9F68E4: push    offset sub_A22670; void (__cdecl *)()
0x9F68E9: call    _atexit
0x9F68EE: pop     ecx
0x9F68EF: retn

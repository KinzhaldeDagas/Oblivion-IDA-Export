0x9E5E20: push    28h ; '('
0x9E5E22: push    offset aIsecundasize; "iSecundaSize"
0x9E5E27: mov     ecx, offset dword_B36620
0x9E5E2C: call    GameSetting_ConstrAndReg
0x9E5E31: push    offset sub_A1D310; void (__cdecl *)()
0x9E5E36: call    _atexit
0x9E5E3B: pop     ecx
0x9E5E3C: retn

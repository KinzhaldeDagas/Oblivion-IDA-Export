0x9E7BE0: push    64h ; 'd'
0x9E7BE2: push    offset aIaidistancerad; "iAIDistanceRadiusMinLocation"
0x9E7BE7: mov     ecx, offset dword_B36B28
0x9E7BEC: call    GameSetting_ConstrAndReg
0x9E7BF1: push    offset sub_A1DD70; void (__cdecl *)()
0x9E7BF6: call    _atexit
0x9E7BFB: pop     ecx
0x9E7BFC: retn

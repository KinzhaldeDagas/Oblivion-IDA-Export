0x9E85E0: push    14h
0x9E85E2: push    offset aIdispbountymax; "iDispBountyMax"
0x9E85E7: mov     ecx, offset iDispBountyMax
0x9E85EC: call    GameSetting_ConstrAndReg
0x9E85F1: push    offset sub_A1E100; void (__cdecl *)()
0x9E85F6: call    _atexit
0x9E85FB: pop     ecx
0x9E85FC: retn

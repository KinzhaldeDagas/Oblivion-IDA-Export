0x9E7080: fld     ds:flt_A3D8F4
0x9E7086: push    ecx
0x9E7087: fstp    [esp+4+var_4]; float
0x9E708A: push    offset aFdistancetopla; "fDistancetoPlayerforConversations"
0x9E708F: mov     ecx, offset fDistancetoPlayerforConversations
0x9E7094: call    GameSetting_ConstrAndReg_float
0x9E7099: push    offset sub_A1D980; void (__cdecl *)()
0x9E709E: call    _atexit
0x9E70A3: pop     ecx
0x9E70A4: retn

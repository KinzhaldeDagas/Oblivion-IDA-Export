0x9EB6F0: fld     ds:flt_A5A1A0
0x9EB6F6: push    ecx
0x9EB6F7: fstp    [esp+4+var_4]; float
0x9EB6FA: push    offset aFbarterbuymult; "fBarterBuyMult"
0x9EB6FF: mov     ecx, offset fBarterBuyMult
0x9EB704: call    GameSetting_ConstrAndReg_float
0x9EB709: push    offset sub_A1F280; void (__cdecl *)()
0x9EB70E: call    _atexit
0x9EB713: pop     ecx
0x9EB714: retn

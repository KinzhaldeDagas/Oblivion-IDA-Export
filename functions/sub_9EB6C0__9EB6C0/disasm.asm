0x9EB6C0: fld     ds:flt_A418D8
0x9EB6C6: push    ecx
0x9EB6C7: fstp    [esp+4+var_4]; float
0x9EB6CA: push    offset aFbartersellbas; "fBarterSellBase"
0x9EB6CF: mov     ecx, offset fBarterSellBase
0x9EB6D4: call    GameSetting_ConstrAndReg_float
0x9EB6D9: push    offset sub_A1F270; void (__cdecl *)()
0x9EB6DE: call    _atexit
0x9EB6E3: pop     ecx
0x9EB6E4: retn

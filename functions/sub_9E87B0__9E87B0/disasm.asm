0x9E87B0: fld     ds:flt_A45E4C
0x9E87B6: push    ecx
0x9E87B7: fstp    [esp+4+var_4]; float
0x9E87BA: push    offset aFaifleeconfmul; "fAIFleeConfMult"
0x9E87BF: mov     ecx, offset flt_B36D40
0x9E87C4: call    GameSetting_ConstrAndReg_float
0x9E87C9: push    offset sub_A1E1A0; void (__cdecl *)()
0x9E87CE: call    _atexit
0x9E87D3: pop     ecx
0x9E87D4: retn

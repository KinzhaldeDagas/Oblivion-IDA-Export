0x9E72B0: fld     ds:flt_A2FE7C
0x9E72B6: push    ecx
0x9E72B7: fstp    [esp+4+var_4]; float
0x9E72BA: push    offset aFaimaxwanderti; "fAIMaxWanderTime"
0x9E72BF: mov     ecx, offset flt_B36990
0x9E72C4: call    GameSetting_ConstrAndReg_float
0x9E72C9: push    offset sub_A1DA40; void (__cdecl *)()
0x9E72CE: call    _atexit
0x9E72D3: pop     ecx
0x9E72D4: retn

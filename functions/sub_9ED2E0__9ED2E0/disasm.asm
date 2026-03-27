0x9ED2E0: fld1
0x9ED2E2: push    ecx
0x9ED2E3: fstp    [esp+4+var_4]; float
0x9ED2E6: mov     ecx, offset flt_B37AC0
0x9ED2EB: push    offset aFbuoyancywood; "fBuoyancyWood"
0x9ED2F0: call    GameSetting_ConstrAndReg_float
0x9ED2F5: push    offset sub_A1FCA0; void (__cdecl *)()
0x9ED2FA: call    _atexit
0x9ED2FF: pop     ecx
0x9ED300: retn

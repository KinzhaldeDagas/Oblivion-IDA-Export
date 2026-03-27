0x9EB8E0: fld     ds:flt_A41304
0x9EB8E6: push    ecx
0x9EB8E7: fstp    [esp+4+var_4]; float
0x9EB8EA: push    offset aFperkathleti_2; "fPerkAthleticsExpertFatigueMult"
0x9EB8EF: mov     ecx, offset fPerkAthleticsExpertFatigueMult
0x9EB8F4: call    GameSetting_ConstrAndReg_float
0x9EB8F9: push    offset sub_A1F330; void (__cdecl *)()
0x9EB8FE: call    _atexit
0x9EB903: pop     ecx
0x9EB904: retn

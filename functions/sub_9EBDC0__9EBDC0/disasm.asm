0x9EBDC0: fld     ds:flt_A2FAAC
0x9EBDC6: push    ecx
0x9EBDC7: fstp    [esp+4+var_4]; float
0x9EBDCA: push    offset aFstatshealthle; "fStatsHealthLevelMult"
0x9EBDCF: mov     ecx, offset fStatsHealthLevelMult
0x9EBDD4: call    GameSetting_ConstrAndReg_float
0x9EBDD9: push    offset sub_A1F530; void (__cdecl *)()
0x9EBDDE: call    _atexit
0x9EBDE3: pop     ecx
0x9EBDE4: retn

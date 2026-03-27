0x9EA760: fld     ds:flt_A2FAAC
0x9EA766: push    ecx
0x9EA767: fstp    [esp+4+var_4]; float
0x9EA76A: push    offset aFcombatvulnera; "fCombatVulnerabilityMod"
0x9EA76F: mov     ecx, offset fCombatVulnerabilityMod
0x9EA774: call    GameSetting_ConstrAndReg_float
0x9EA779: push    offset sub_A1ED30; void (__cdecl *)()
0x9EA77E: call    _atexit
0x9EA783: pop     ecx
0x9EA784: retn

0x9E8590: fld     ds:dword_A46C30; MEF LARGE PERF 2026-09-08: PERF-7 timer proof: registers fSortActorDistanceListTimer default3.0 usingB36CE0. Runtime overrides/elapsed scheduling were not sampled. Adjacent9E8560 registers fShaderShadowUpdateDistance default3000.0 for the candidate rebuild radius.
0x9E8596: push    ecx
0x9E8597: fstp    [esp+4+var_4]; float
0x9E859A: push    offset aFsortactordist; "fSortActorDistanceListTimer"
0x9E859F: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+8)
0x9E85A4: call    GameSetting_ConstrAndReg_float
0x9E85A9: push    offset sub_A1E0E0; void (__cdecl *)()
0x9E85AE: call    _atexit
0x9E85B3: pop     ecx
0x9E85B4: retn

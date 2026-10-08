0x9E9390: fld     ds:flt_A56E98
0x9E9396: push    ecx
0x9E9397: fstp    [esp+4+var_4]; float
0x9E939A: push    offset aFcombatspeakhi; "fCombatSpeakHitChance"
0x9E939F: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+278h)
0x9E93A4: call    GameSetting_ConstrAndReg_float
0x9E93A9: push    offset sub_A1E5C0; void (__cdecl *)()
0x9E93AE: call    _atexit
0x9E93B3: pop     ecx
0x9E93B4: retn

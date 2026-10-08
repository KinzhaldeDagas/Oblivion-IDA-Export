0x9E8890: fld1
0x9E8892: push    ecx
0x9E8893: fstp    [esp+4+var_4]; float
0x9E8896: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+90h)
0x9E889B: push    offset aFaiyielddurati; "fAIYieldDurationBase"
0x9E88A0: call    GameSetting_ConstrAndReg_float
0x9E88A5: push    offset sub_A1E1F0; void (__cdecl *)()
0x9E88AA: call    _atexit
0x9E88AF: pop     ecx
0x9E88B0: retn

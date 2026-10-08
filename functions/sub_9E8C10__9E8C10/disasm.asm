0x9E8C10: fld     ds:kHeadBodyNormalMatchRadius
0x9E8C16: push    ecx
0x9E8C17: fstp    [esp+4+var_4]; float
0x9E8C1A: push    offset aFdamagestrengt; "fDamageStrengthBase"
0x9E8C1F: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+128h)
0x9E8C24: call    GameSetting_ConstrAndReg_float
0x9E8C29: push    offset sub_A1E320; void (__cdecl *)()
0x9E8C2E: call    _atexit
0x9E8C33: pop     ecx
0x9E8C34: retn

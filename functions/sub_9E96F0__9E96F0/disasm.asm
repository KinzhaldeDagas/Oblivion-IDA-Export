0x9E96F0: fld     ds:kFaceEarNormalMatchRadius
0x9E96F6: push    ecx
0x9E96F7: fstp    [esp+4+var_4]; float
0x9E96FA: push    offset aFfatigueatta_0; "fFatigueAttackWeaponMult"
0x9E96FF: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+308h)
0x9E9704: call    GameSetting_ConstrAndReg_float
0x9E9709: push    offset sub_A1E6E0; void (__cdecl *)()
0x9E970E: call    _atexit
0x9E9713: pop     ecx
0x9E9714: retn

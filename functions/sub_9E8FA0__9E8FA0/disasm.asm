0x9E8FA0: fld     ds:flt_A56E98
0x9E8FA6: push    ecx
0x9E8FA7: fstp    [esp+4+var_4]; float
0x9E8FAA: push    offset aFarmorratingba; "fArmorRatingBase"
0x9E8FAF: mov     ecx, offset fArmorRatingBase
0x9E8FB4: call    GameSetting_ConstrAndReg_float
0x9E8FB9: push    offset sub_A1E450; void (__cdecl *)()
0x9E8FBE: call    _atexit
0x9E8FC3: pop     ecx
0x9E8FC4: retn

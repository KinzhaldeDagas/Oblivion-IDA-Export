0x9E9BF0: fld     ds:flt_A590B4
0x9E9BF6: push    ecx
0x9E9BF7: fstp    [esp+4+var_4]; float
0x9E9BFA: push    offset aFprojectilemax; "fProjectileMaxDistance"
0x9E9BFF: mov     ecx, offset unk_B370B8
0x9E9C04: call    GameSetting_ConstrAndReg_float
0x9E9C09: push    offset sub_A1E890; void (__cdecl *)()
0x9E9C0E: call    _atexit
0x9E9C13: pop     ecx
0x9E9C14: retn

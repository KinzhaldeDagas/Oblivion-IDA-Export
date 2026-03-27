0x9EB1D0: fld     ds:flt_A468FC
0x9EB1D6: push    ecx
0x9EB1D7: fstp    [esp+4+var_4]; float
0x9EB1DA: push    offset aFperkheavyarmo; "fPerkHeavyArmorSinkGravityMult"
0x9EB1DF: mov     ecx, offset fPerkHeavyArmorSinkGravityMult
0x9EB1E4: call    GameSetting_ConstrAndReg_float
0x9EB1E9: push    offset sub_A1F0C0; void (__cdecl *)()
0x9EB1EE: call    _atexit
0x9EB1F3: pop     ecx
0x9EB1F4: retn

0x9E9CE0: fld     ds:flt_A57F50
0x9E9CE6: push    ecx
0x9E9CE7: fstp    [esp+4+var_4]; float
0x9E9CEA: push    offset aFprojectilekno; "fProjectileKnockMultClutter"
0x9E9CEF: mov     ecx, offset flt_B370E8
0x9E9CF4: call    GameSetting_ConstrAndReg_float
0x9E9CF9: push    offset sub_A1E8F0; void (__cdecl *)()
0x9E9CFE: call    _atexit
0x9E9D03: pop     ecx
0x9E9D04: retn

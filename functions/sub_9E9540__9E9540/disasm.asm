0x9E9540: fld     ds:flt_A57B08
0x9E9546: push    ecx
0x9E9547: fstp    [esp+4+var_4]; float
0x9E954A: push    offset aFknockdownda_0; "fKnockdownDamageMult"
0x9E954F: mov     ecx, offset flt_B36F98
0x9E9554: call    GameSetting_ConstrAndReg_float
0x9E9559: push    offset sub_A1E650; void (__cdecl *)()
0x9E955E: call    _atexit
0x9E9563: pop     ecx
0x9E9564: retn

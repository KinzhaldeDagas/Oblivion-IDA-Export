0x9EE4D0: fld     ds:flt_A2FE7C
0x9EE4D6: push    ecx
0x9EE4D7: fstp    [esp+4+var_4]; float
0x9EE4DA: push    offset aFmagicspelll_4; "fMagicSpellLevelMasterMin"
0x9EE4DF: mov     ecx, offset flt_B37E20
0x9EE4E4: call    GameSetting_ConstrAndReg_float
0x9EE4E9: push    offset sub_A20360; void (__cdecl *)()
0x9EE4EE: call    _atexit
0x9EE4F3: pop     ecx
0x9EE4F4: retn

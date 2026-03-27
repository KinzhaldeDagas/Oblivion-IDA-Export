0x9E86F0: fld     ds:dword_A46C30
0x9E86F6: push    ecx
0x9E86F7: fstp    [esp+4+var_4]; float
0x9E86FA: push    offset aFaimagicspellm; "fAIMagicSpellMult"
0x9E86FF: mov     ecx, offset flt_B36D20
0x9E8704: call    GameSetting_ConstrAndReg_float
0x9E8709: push    offset sub_A1E160; void (__cdecl *)()
0x9E870E: call    _atexit
0x9E8713: pop     ecx
0x9E8714: retn

0x9EE2F0: fld     ds:flt_A57F50
0x9EE2F6: push    ecx
0x9EE2F7: fstp    [esp+4+var_4]; float
0x9EE2FA: push    offset aFmagicareabase; "fMagicAreaBaseCostMult"
0x9EE2FF: mov     ecx, offset fMagicAreaBaseCostMult
0x9EE304: call    GameSetting_ConstrAndReg_float
0x9EE309: push    offset sub_A202C0; void (__cdecl *)()
0x9EE30E: call    _atexit
0x9EE313: pop     ecx
0x9EE314: retn

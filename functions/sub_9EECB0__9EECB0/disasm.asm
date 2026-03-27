0x9EECB0: fld     ds:flt_A46B10
0x9EECB6: push    ecx
0x9EECB7: fstp    [esp+4+var_4]; float
0x9EECBA: push    offset aFwortcraftstrc; "fWortcraftStrChanceDenom"
0x9EECBF: mov     ecx, offset fWortcraftStrChanceDenom
0x9EECC4: call    GameSetting_ConstrAndReg_float
0x9EECC9: push    offset sub_A20600; void (__cdecl *)()
0x9EECCE: call    _atexit
0x9EECD3: pop     ecx
0x9EECD4: retn

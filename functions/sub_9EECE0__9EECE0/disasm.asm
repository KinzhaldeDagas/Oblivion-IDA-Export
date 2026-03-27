0x9EECE0: fld     ds:flt_A31C80
0x9EECE6: push    ecx
0x9EECE7: fstp    [esp+4+var_4]; float
0x9EECEA: push    offset aFwortcraftst_0; "fWortcraftStrCostDenom"
0x9EECEF: mov     ecx, offset fWortcraftStrCostDenom
0x9EECF4: call    GameSetting_ConstrAndReg_float
0x9EECF9: push    offset sub_A20610; void (__cdecl *)()
0x9EECFE: call    _atexit
0x9EED03: pop     ecx
0x9EED04: retn

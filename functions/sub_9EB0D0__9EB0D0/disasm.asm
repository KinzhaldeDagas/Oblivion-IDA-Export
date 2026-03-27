0x9EB0D0: fld     ds:flt_A57FB8
0x9EB0D6: push    ecx
0x9EB0D7: fstp    [esp+4+var_4]; float
0x9EB0DA: push    offset aFjumpheightmax; "fJumpHeightMax"
0x9EB0DF: mov     ecx, offset fJumpHeightMax
0x9EB0E4: call    GameSetting_ConstrAndReg_float
0x9EB0E9: push    offset sub_A1F060; void (__cdecl *)()
0x9EB0EE: call    _atexit
0x9EB0F3: pop     ecx
0x9EB0F4: retn

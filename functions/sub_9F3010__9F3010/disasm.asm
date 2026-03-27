0x9F3010: fld     ds:flt_A57770
0x9F3016: push    ecx
0x9F3017: fstp    [esp+4+var_4]; float
0x9F301A: push    offset aFpersuasionr_1; "fPersuasionReactionDislike"
0x9F301F: mov     ecx, offset fPersuasionReactionDislike
0x9F3024: call    GameSetting_ConstrAndReg_float
0x9F3029: push    offset sub_A223F0; void (__cdecl *)()
0x9F302E: call    _atexit
0x9F3033: pop     ecx
0x9F3034: retn

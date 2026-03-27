0x9F2FB0: fld     ds:flt_A2FE7C
0x9F2FB6: push    ecx
0x9F2FB7: fstp    [esp+4+var_4]; float
0x9F2FBA: push    offset aFpersuasionrea; "fPersuasionReactionLove"
0x9F2FBF: mov     ecx, offset fPersuasionReactionLove
0x9F2FC4: call    GameSetting_ConstrAndReg_float
0x9F2FC9: push    offset sub_A223D0; void (__cdecl *)()
0x9F2FCE: call    _atexit
0x9F2FD3: pop     ecx
0x9F2FD4: retn

0x9E7A30: fld     ds:flt_A57EF8
0x9E7A36: push    ecx
0x9E7A37: fstp    [esp+4+var_4]; float
0x9E7A3A: push    offset aFaimaxsmiledis; "fAIMaxSmileDistance"
0x9E7A3F: mov     ecx, offset unk_B36AE0
0x9E7A44: call    GameSetting_ConstrAndReg_float
0x9E7A49: push    offset sub_A1DCE0; void (__cdecl *)()
0x9E7A4E: call    _atexit
0x9E7A53: pop     ecx
0x9E7A54: retn

0x9E7970: fld     ds:flt_A57A64
0x9E7976: push    ecx
0x9E7977: fstp    [esp+4+var_4]; float
0x9E797A: push    offset aFaimaxheadtr_0; "fAIMaxHeadTrackDistance"
0x9E797F: mov     ecx, offset unk_B36AC0
0x9E7984: call    GameSetting_ConstrAndReg_float
0x9E7989: push    offset sub_A1DCA0; void (__cdecl *)()
0x9E798E: call    _atexit
0x9E7993: pop     ecx
0x9E7994: retn

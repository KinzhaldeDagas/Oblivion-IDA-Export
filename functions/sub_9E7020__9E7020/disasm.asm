0x9E7020: fld     ds:flt_A417B4
0x9E7026: push    ecx
0x9E7027: fstp    [esp+4+var_4]; float
0x9E702A: push    offset aFaispectatorco; "fAISpectatorCommentTimer"
0x9E702F: mov     ecx, offset unk_B36920
0x9E7034: call    GameSetting_ConstrAndReg_float
0x9E7039: push    offset sub_A1D960; void (__cdecl *)()
0x9E703E: call    _atexit
0x9E7043: pop     ecx
0x9E7044: retn

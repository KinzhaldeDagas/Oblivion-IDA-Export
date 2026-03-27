0x9E7220: fld     ds:flt_A57B08
0x9E7226: push    ecx
0x9E7227: fstp    [esp+4+var_4]; float
0x9E722A: push    offset aFpickpocketa_1; "fPickPocketAmountMult"
0x9E722F: mov     ecx, offset flt_B36978
0x9E7234: call    GameSetting_ConstrAndReg_float
0x9E7239: push    offset sub_A1DA10; void (__cdecl *)()
0x9E723E: call    _atexit
0x9E7243: pop     ecx
0x9E7244: retn

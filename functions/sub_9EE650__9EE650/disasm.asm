0x9EE650: fld     ds:flt_A5ACC4
0x9EE656: push    ecx
0x9EE657: fstp    [esp+4+var_4]; float
0x9EE65A: push    offset aFmagicresist_1; "fMagicResistTargetWillpowerMult"
0x9EE65F: mov     ecx, offset unk_B37E60
0x9EE664: call    GameSetting_ConstrAndReg_float
0x9EE669: push    offset sub_A203E0; void (__cdecl *)()
0x9EE66E: call    _atexit
0x9EE673: pop     ecx
0x9EE674: retn

0x9E73A0: fld     ds:flt_A2FAAC
0x9E73A6: push    ecx
0x9E73A7: fstp    [esp+4+var_4]; float
0x9E73AA: push    offset aFpicknummult; "fPickNumMult"
0x9E73AF: mov     ecx, offset unk_B369B8
0x9E73B4: call    GameSetting_ConstrAndReg_float
0x9E73B9: push    offset sub_A1DA90; void (__cdecl *)()
0x9E73BE: call    _atexit
0x9E73C3: pop     ecx
0x9E73C4: retn

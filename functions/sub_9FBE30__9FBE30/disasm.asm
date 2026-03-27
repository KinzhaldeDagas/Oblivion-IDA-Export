0x9FBE30: fld     ds:flt_A374BC
0x9FBE36: push    ecx
0x9FBE37: fstp    [esp+4+var_4]; float
0x9FBE3A: push    offset aFmaxcreateddur; "fMaxCreatedDur"
0x9FBE3F: mov     ecx, offset unk_B3B2C4
0x9FBE44: call    GameSetting_ConstrAndReg_float
0x9FBE49: push    offset sub_A24B00; void (__cdecl *)()
0x9FBE4E: call    _atexit
0x9FBE53: pop     ecx
0x9FBE54: retn

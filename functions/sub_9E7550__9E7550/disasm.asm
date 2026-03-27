0x9E7550: fld1
0x9E7552: push    ecx
0x9E7553: fstp    [esp+4+var_4]; float
0x9E7556: mov     ecx, offset unk_B36A00
0x9E755B: push    offset aFlockskillmult; "fLockSkillMult"
0x9E7560: call    GameSetting_ConstrAndReg_float
0x9E7565: push    offset sub_A1DB20; void (__cdecl *)()
0x9E756A: call    _atexit
0x9E756F: pop     ecx
0x9E7570: retn

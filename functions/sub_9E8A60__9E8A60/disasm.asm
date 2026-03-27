0x9E8A60: fld     ds:flt_A31C80
0x9E8A66: push    ecx
0x9E8A67: fstp    [esp+4+var_4]; float
0x9E8A6A: push    offset aFaipoweratta_1; "fAIPowerAttackRecoilBonus"
0x9E8A6F: mov     ecx, offset unk_B36DB8
0x9E8A74: call    GameSetting_ConstrAndReg_float
0x9E8A79: push    offset sub_A1E290; void (__cdecl *)()
0x9E8A7E: call    _atexit
0x9E8A83: pop     ecx
0x9E8A84: retn

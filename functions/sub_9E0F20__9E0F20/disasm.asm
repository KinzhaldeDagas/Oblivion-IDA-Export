0x9E0F20: fld1
0x9E0F22: push    ecx
0x9E0F23: fstp    [esp+4+var_4]; float
0x9E0F26: mov     ecx, offset flt_B35700
0x9E0F2B: push    offset aFaidefaultbl_2; "fAIDefaultBlockNoAttackMult"
0x9E0F30: call    GameSetting_ConstrAndReg_float
0x9E0F35: push    offset sub_A1AD30; void (__cdecl *)()
0x9E0F3A: call    _atexit
0x9E0F3F: pop     ecx
0x9E0F40: retn

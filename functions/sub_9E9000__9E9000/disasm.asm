0x9E9000: fldz
0x9E9002: push    ecx
0x9E9003: fstp    [esp+4+var_4]; float
0x9E9006: mov     ecx, offset fArmorRatingConditionBase
0x9E900B: push    offset aFarmorratingco; "fArmorRatingConditionBase"
0x9E9010: call    GameSetting_ConstrAndReg_float
0x9E9015: push    offset sub_A1E470; void (__cdecl *)()
0x9E901A: call    _atexit
0x9E901F: pop     ecx
0x9E9020: retn

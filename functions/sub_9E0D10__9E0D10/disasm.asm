0x9E0D10: fld     ds:flt_A41684
0x9E0D16: push    ecx
0x9E0D17: fstp    [esp+4+var_4]; float
0x9E0D1A: push    offset aFaidefaultdo_7; "fAIDefaultDodgeSpeedBase"
0x9E0D1F: mov     ecx, (offset flt_B35668+40h)
0x9E0D24: call    GameSetting_ConstrAndReg_float
0x9E0D29: push    offset sub_A1AC80; void (__cdecl *)()
0x9E0D2E: call    _atexit
0x9E0D33: pop     ecx
0x9E0D34: retn

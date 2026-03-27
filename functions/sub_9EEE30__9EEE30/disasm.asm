0x9EEE30: fldz
0x9EEE32: push    ecx
0x9EEE33: fstp    [esp+4+var_4]; float
0x9EEE36: mov     ecx, offset fMagicSunDamageMinWeather
0x9EEE3B: push    offset aFmagicsundam_2; "fMagicSunDamageMinWeather"
0x9EEE40: call    GameSetting_ConstrAndReg_float
0x9EEE45: push    offset sub_A20680; void (__cdecl *)()
0x9EEE4A: call    _atexit
0x9EEE4F: pop     ecx
0x9EEE50: retn

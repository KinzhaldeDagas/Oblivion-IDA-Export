0x9EEE60: fld     ds:dword_A46C30
0x9EEE66: push    ecx
0x9EEE67: fstp    [esp+4+var_4]; float
0x9EEE6A: push    offset aFmagicsundam_3; "fMagicSunDamageScreenGlowMult"
0x9EEE6F: mov     ecx, offset fMagicSunDamageScreenGlowMult
0x9EEE74: call    GameSetting_ConstrAndReg_float
0x9EEE79: push    offset sub_A20690; void (__cdecl *)()
0x9EEE7E: call    _atexit
0x9EEE83: pop     ecx
0x9EEE84: retn

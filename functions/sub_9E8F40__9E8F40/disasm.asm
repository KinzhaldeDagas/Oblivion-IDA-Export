0x9E8F40: fldz
0x9E8F42: push    ecx
0x9E8F43: fstp    [esp+4+var_4]; float
0x9E8F46: mov     ecx, offset fHandFatigueDamageBase
0x9E8F4B: push    offset aFhandfatigue_0; "fHandFatigueDamageBase"
0x9E8F50: call    GameSetting_ConstrAndReg_float
0x9E8F55: push    offset sub_A1E430; void (__cdecl *)()
0x9E8F5A: call    _atexit
0x9E8F5F: pop     ecx
0x9E8F60: retn

0x9E8D90: fld     ds:dword_A46C30
0x9E8D96: push    ecx
0x9E8D97: fstp    [esp+4+var_4]; float
0x9E8D9A: push    offset aFdamagepower_3; "fDamagePowerAttackForwardBonus"
0x9E8D9F: mov     ecx, offset fDamagePowerAttackForwardBonus
0x9E8DA4: call    GameSetting_ConstrAndReg_float
0x9E8DA9: push    offset sub_A1E3A0; void (__cdecl *)()
0x9E8DAE: call    _atexit
0x9E8DB3: pop     ecx
0x9E8DB4: retn

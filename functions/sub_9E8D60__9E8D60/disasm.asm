0x9E8D60: fld     ds:dword_A46C30
0x9E8D66: push    ecx
0x9E8D67: fstp    [esp+4+var_4]; float
0x9E8D6A: push    offset aFdamagepower_2; "fDamagePowerAttackBackBonus"
0x9E8D6F: mov     ecx, offset fDamagePowerAttackBackBonus
0x9E8D74: call    GameSetting_ConstrAndReg_float
0x9E8D79: push    offset sub_A1E390; void (__cdecl *)()
0x9E8D7E: call    _atexit
0x9E8D83: pop     ecx
0x9E8D84: retn

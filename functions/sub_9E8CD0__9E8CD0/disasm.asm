0x9E8CD0: fld     ds:dword_A46C30
0x9E8CD6: push    ecx
0x9E8CD7: fstp    [esp+4+var_4]; float
0x9E8CDA: push    offset aFdamagepowerat; "fDamagePowerAttackBonus"
0x9E8CDF: mov     ecx, offset fDamagePowerAttackBonus
0x9E8CE4: call    GameSetting_ConstrAndReg_float
0x9E8CE9: push    offset sub_A1E360; void (__cdecl *)()
0x9E8CEE: call    _atexit
0x9E8CF3: pop     ecx
0x9E8CF4: retn

0x9E96C0: fld     ds:flt_A58E1C
0x9E96C6: push    ecx
0x9E96C7: fstp    [esp+4+var_4]; float
0x9E96CA: push    offset aFfatigueattack; "fFatigueAttackWeaponBase"
0x9E96CF: mov     ecx, offset fFatigueAttackWeaponBase
0x9E96D4: call    GameSetting_ConstrAndReg_float
0x9E96D9: push    offset sub_A1E6D0; void (__cdecl *)()
0x9E96DE: call    _atexit
0x9E96E3: pop     ecx
0x9E96E4: retn

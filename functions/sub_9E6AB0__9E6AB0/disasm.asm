0x9E6AB0: fld     ds:flt_A418D8
0x9E6AB6: push    ecx
0x9E6AB7: fstp    [esp+4+var_4]; float
0x9E6ABA: push    offset aFdisptargetwea; "fDispTargetWeaponBase"
0x9E6ABF: mov     ecx, offset fDispTargetWeaponBase
0x9E6AC4: call    GameSetting_ConstrAndReg_float
0x9E6AC9: push    offset sub_A1D780; void (__cdecl *)()
0x9E6ACE: call    _atexit
0x9E6AD3: pop     ecx
0x9E6AD4: retn

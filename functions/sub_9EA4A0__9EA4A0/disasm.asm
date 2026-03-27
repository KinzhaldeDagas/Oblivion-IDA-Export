0x9EA4A0: fld1
0x9EA4A2: push    ecx
0x9EA4A3: fstp    [esp+4+var_4]; float
0x9EA4A6: mov     ecx, offset fCombatCollectAlliesTimer
0x9EA4AB: push    offset aFcombatcollect; "fCombatCollectAlliesTimer"
0x9EA4B0: call    GameSetting_ConstrAndReg_float
0x9EA4B5: push    offset sub_A1EC20; void (__cdecl *)()
0x9EA4BA: call    _atexit
0x9EA4BF: pop     ecx
0x9EA4C0: retn

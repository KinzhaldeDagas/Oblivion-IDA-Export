0x9E92A0: fld     ds:flt_A417B4
0x9E92A6: push    ecx
0x9E92A7: fstp    [esp+4+var_4]; float
0x9E92AA: push    offset aFcombathitcone; "fCombatHitConeAngle"
0x9E92AF: mov     ecx, offset fCombatHitConeAngle
0x9E92B4: call    GameSetting_ConstrAndReg_float
0x9E92B9: push    offset sub_A1E570; void (__cdecl *)()
0x9E92BE: call    _atexit
0x9E92C3: pop     ecx
0x9E92C4: retn

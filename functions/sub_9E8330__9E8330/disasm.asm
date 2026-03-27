0x9E8330: fld     ds:flt_A46B10
0x9E8336: push    ecx
0x9E8337: fstp    [esp+4+var_4]; float
0x9E833A: push    offset aFremotecombatm; "fRemoteCombatMissedAttack"
0x9E833F: mov     ecx, offset flt_B36C78
0x9E8344: call    GameSetting_ConstrAndReg_float
0x9E8349: push    offset sub_A1E010; void (__cdecl *)()
0x9E834E: call    _atexit
0x9E8353: pop     ecx
0x9E8354: retn

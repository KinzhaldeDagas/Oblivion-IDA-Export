0x9E7740: fld     ds:flt_A57D20
0x9E7746: push    ecx
0x9E7747: fstp    [esp+4+var_4]; float
0x9E774A: push    offset aFcrimealarmres; "fCrimeAlarmRespMult"
0x9E774F: mov     ecx, offset fCrimeAlarmRespMult
0x9E7754: call    GameSetting_ConstrAndReg_float
0x9E7759: push    offset sub_A1DBD0; void (__cdecl *)()
0x9E775E: call    _atexit
0x9E7763: pop     ecx
0x9E7764: retn

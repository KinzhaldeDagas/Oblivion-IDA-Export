0x9EA470: fld     ds:flt_A41304
0x9EA476: push    ecx
0x9EA477: fstp    [esp+4+var_4]; float
0x9EA47A: push    offset aFcombatlineofs; "fCombatLineOfSightTimer"
0x9EA47F: mov     ecx, offset fCombatLineOfSightTimer
0x9EA484: call    GameSetting_ConstrAndReg_float
0x9EA489: push    offset sub_A1EC10; void (__cdecl *)()
0x9EA48E: call    _atexit
0x9EA493: pop     ecx
0x9EA494: retn

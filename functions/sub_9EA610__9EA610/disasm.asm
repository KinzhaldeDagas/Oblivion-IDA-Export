0x9EA610: fld     ds:flt_A41304
0x9EA616: push    ecx
0x9EA617: fstp    [esp+4+var_4]; float
0x9EA61A: push    offset aFaicombattarge; "fAICombatTargetUnreachablePriorityMult"
0x9EA61F: mov     ecx, offset unk_B372C0
0x9EA624: call    GameSetting_ConstrAndReg_float
0x9EA629: push    offset sub_A1ECA0; void (__cdecl *)()
0x9EA62E: call    _atexit
0x9EA633: pop     ecx
0x9EA634: retn

0x9E9420: fld     ds:flt_A41304
0x9E9426: push    ecx
0x9E9427: fstp    [esp+4+var_4]; float
0x9E942A: push    offset aFcombatadvance; "fCombatAdvanceNormalAttackChance"
0x9E942F: mov     ecx, offset unk_B36F68
0x9E9434: call    GameSetting_ConstrAndReg_float
0x9E9439: push    offset sub_A1E5F0; void (__cdecl *)()
0x9E943E: call    _atexit
0x9E9443: pop     ecx
0x9E9444: retn

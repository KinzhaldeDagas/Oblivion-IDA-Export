0x9E93F0: fld     ds:flt_A41304
0x9E93F6: push    ecx
0x9E93F7: fstp    [esp+4+var_4]; float
0x9E93FA: push    offset aFcombatforward; "fCombatForwardAttackChance"
0x9E93FF: mov     ecx, offset unk_B36F60
0x9E9404: call    GameSetting_ConstrAndReg_float
0x9E9409: push    offset sub_A1E5E0; void (__cdecl *)()
0x9E940E: call    _atexit
0x9E9413: pop     ecx
0x9E9414: retn

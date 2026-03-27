0x9E3AE0: fld     ds:flt_A524B0
0x9E3AE6: push    ecx
0x9E3AE7: fstp    [esp+4+var_4]; float
0x9E3AEA: push    offset aFcombatsoundfl; "fCombatSoundFleshPct"
0x9E3AEF: mov     ecx, (offset stru_B36208.unk18+6Ch)
0x9E3AF4: call    GameSetting_ConstrAndReg_float
0x9E3AF9: push    offset sub_A1C140; void (__cdecl *)()
0x9E3AFE: call    _atexit
0x9E3B03: pop     ecx
0x9E3B04: retn

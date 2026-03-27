0x9E3A80: fld     ds:flt_A5247C
0x9E3A86: push    ecx
0x9E3A87: fstp    [esp+4+var_4]; float
0x9E3A8A: push    offset aFcombatsoundwe; "fCombatSoundWeaponPct"
0x9E3A8F: mov     ecx, (offset stru_B36208.unk18+5Ch)
0x9E3A94: call    GameSetting_ConstrAndReg_float
0x9E3A99: push    offset sub_A1C120; void (__cdecl *)()
0x9E3A9E: call    _atexit
0x9E3AA3: pop     ecx
0x9E3AA4: retn

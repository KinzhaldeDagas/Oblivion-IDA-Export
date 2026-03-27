0x9EA590: fld     ds:flt_A5977C
0x9EA596: push    ecx
0x9EA597: fstp    [esp+4+var_4]; float
0x9EA59A: push    offset aFcombatrangeds; "fCombatRangedStandoffTimer"
0x9EA59F: mov     ecx, offset unk_B372A8
0x9EA5A4: call    GameSetting_ConstrAndReg_float
0x9EA5A9: push    offset sub_A1EC70; void (__cdecl *)()
0x9EA5AE: call    _atexit
0x9EA5B3: pop     ecx
0x9EA5B4: retn

0x9E3AB0: fld     ds:flt_A37450
0x9E3AB6: push    ecx
0x9E3AB7: fstp    [esp+4+var_4]; float
0x9E3ABA: push    offset aFcombatsoundar; "fCombatSoundArmorPct"
0x9E3ABF: mov     ecx, (offset stru_B36208.unk18+64h)
0x9E3AC4: call    GameSetting_ConstrAndReg_float
0x9E3AC9: push    offset sub_A1C130; void (__cdecl *)()
0x9E3ACE: call    _atexit
0x9E3AD3: pop     ecx
0x9E3AD4: retn

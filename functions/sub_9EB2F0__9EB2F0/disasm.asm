0x9EB2F0: fld     ds:flt_A3D65C
0x9EB2F6: push    ecx
0x9EB2F7: fstp    [esp+4+var_4]; float
0x9EB2FA: push    offset aFperkheavyar_3; "fPerkHeavyArmorJourneymanDamageMult"
0x9EB2FF: mov     ecx, offset fPerkHeavyArmorJourneymanDamageMult
0x9EB304: call    GameSetting_ConstrAndReg_float
0x9EB309: push    offset sub_A1F120; void (__cdecl *)()
0x9EB30E: call    _atexit
0x9EB313: pop     ecx
0x9EB314: retn

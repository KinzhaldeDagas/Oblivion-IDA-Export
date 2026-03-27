0x9EB2C0: fld     ds:flt_A35AA4
0x9EB2C6: push    ecx
0x9EB2C7: fstp    [esp+4+var_4]; float
0x9EB2CA: push    offset aFperkheavyar_2; "fPerkHeavyArmorNoviceDamageMult"
0x9EB2CF: mov     ecx, offset fPerkHeavyArmorNoviceDamageMult
0x9EB2D4: call    GameSetting_ConstrAndReg_float
0x9EB2D9: push    offset sub_A1F110; void (__cdecl *)()
0x9EB2DE: call    _atexit
0x9EB2E3: pop     ecx
0x9EB2E4: retn

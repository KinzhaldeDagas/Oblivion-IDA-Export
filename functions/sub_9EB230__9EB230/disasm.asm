0x9EB230: fldz
0x9EB232: push    ecx
0x9EB233: fstp    [esp+4+var_4]; float
0x9EB236: mov     ecx, offset fPerkHeavyArmorMasterSpeedMult
0x9EB23B: push    offset aFperkheavyar_1; "fPerkHeavyArmorMasterSpeedMult"
0x9EB240: call    GameSetting_ConstrAndReg_float
0x9EB245: push    offset sub_A1F0E0; void (__cdecl *)()
0x9EB24A: call    _atexit
0x9EB24F: pop     ecx
0x9EB250: retn

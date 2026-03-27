0x9E3C20: fld     ds:flt_A31E2C
0x9E3C26: push    ecx
0x9E3C27: fstp    [esp+4+var_4]; float
0x9E3C2A: push    offset aFattributeclas; "fAttributeClassPrimaryBonus"
0x9E3C2F: mov     ecx, offset fAttributeClassPrimaryBonus
0x9E3C34: call    GameSetting_ConstrAndReg_float
0x9E3C39: push    offset sub_A1C1E0; void (__cdecl *)()
0x9E3C3E: call    _atexit
0x9E3C43: pop     ecx
0x9E3C44: retn

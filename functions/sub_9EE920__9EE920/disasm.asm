0x9EE920: fld     ds:flt_A2FE7C
0x9EE926: push    ecx
0x9EE927: fstp    [esp+4+var_4]; float
0x9EE92A: push    offset aFmagicareasc_0; "fMagicAreaScaleMax"
0x9EE92F: mov     ecx, offset flt_B37ED8
0x9EE934: call    GameSetting_ConstrAndReg_float
0x9EE939: push    offset sub_A204D0; void (__cdecl *)()
0x9EE93E: call    _atexit
0x9EE943: pop     ecx
0x9EE944: retn

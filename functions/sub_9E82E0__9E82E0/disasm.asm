0x9E82E0: fld     ds:dword_A46C30
0x9E82E6: push    ecx
0x9E82E7: fstp    [esp+4+var_4]; float
0x9E82EA: push    offset aFcombatroundam; "fCombatRoundAmount"
0x9E82EF: mov     ecx, offset flt_B36C68
0x9E82F4: call    GameSetting_ConstrAndReg_float
0x9E82F9: push    offset sub_A1DFF0; void (__cdecl *)()
0x9E82FE: call    _atexit
0x9E8303: pop     ecx
0x9E8304: retn

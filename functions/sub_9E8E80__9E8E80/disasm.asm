0x9E8E80: fld     ds:flt_A41328
0x9E8E86: push    ecx
0x9E8E87: fstp    [esp+4+var_4]; float
0x9E8E8A: push    offset aFhanddamages_1; "fHandDamageStrengthMult"
0x9E8E8F: mov     ecx, offset fHandDamageStrengthMult
0x9E8E94: call    GameSetting_ConstrAndReg_float
0x9E8E99: push    offset sub_A1E3F0; void (__cdecl *)()
0x9E8E9E: call    _atexit
0x9E8EA3: pop     ecx
0x9E8EA4: retn

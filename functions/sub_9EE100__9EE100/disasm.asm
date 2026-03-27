0x9EE100: fld     ds:flt_A342A4
0x9EE106: push    ecx
0x9EE107: fstp    [esp+4+var_4]; float
0x9EE10A: push    offset aFdeathsoundmax; "fDeathSoundMaxDistance"
0x9EE10F: mov     ecx, offset fDeathSoundMaxDistance
0x9EE114: call    GameSetting_ConstrAndReg_float
0x9EE119: push    offset sub_A20210; void (__cdecl *)()
0x9EE11E: call    _atexit
0x9EE123: pop     ecx
0x9EE124: retn

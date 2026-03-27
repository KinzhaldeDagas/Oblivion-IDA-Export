0x9EE470: fld     ds:flt_A3D8F0
0x9EE476: push    ecx
0x9EE477: fstp    [esp+4+var_4]; float
0x9EE47A: push    offset aFmagicspelll_2; "fMagicSpellLevelJourneymanMin"
0x9EE47F: mov     ecx, offset flt_B37E10
0x9EE484: call    GameSetting_ConstrAndReg_float
0x9EE489: push    offset sub_A20340; void (__cdecl *)()
0x9EE48E: call    _atexit
0x9EE493: pop     ecx
0x9EE494: retn

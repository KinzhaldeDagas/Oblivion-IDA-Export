0x9EE8F0: fld     ds:flt_A5905C
0x9EE8F6: push    ecx
0x9EE8F7: fstp    [esp+4+var_4]; float
0x9EE8FA: push    offset aFmagicareascal; "fMagicAreaScale"
0x9EE8FF: mov     ecx, offset flt_B37ED0
0x9EE904: call    GameSetting_ConstrAndReg_float
0x9EE909: push    offset sub_A204C0; void (__cdecl *)()
0x9EE90E: call    _atexit
0x9EE913: pop     ecx
0x9EE914: retn

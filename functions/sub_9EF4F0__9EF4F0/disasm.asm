0x9EF4F0: fld     ds:flt_A31E2C
0x9EF4F6: push    ecx
0x9EF4F7: fstp    [esp+4+var_4]; float
0x9EF4FA: push    offset aFmagicceenchan; "fMagicCEEnchantMagOffset"
0x9EF4FF: mov     ecx, offset fMagicCEEnchantMagOffset
0x9EF504: call    GameSetting_ConstrAndReg_float
0x9EF509: push    offset sub_A208E0; void (__cdecl *)()
0x9EF50E: call    _atexit
0x9EF513: pop     ecx
0x9EF514: retn

0x9F8F20: fld     ds:flt_A65258; Verified GameSettingFloat dynamic initializer: registers fTreeFarDistanceBase with default 16384.0 and registers its destructor via atexit.
0x9F8F26: push    ecx
0x9F8F27: fstp    [esp+4+var_4]; float
0x9F8F2A: push    offset aFtreefardistan; "fTreeFarDistanceBase"
0x9F8F2F: mov     ecx, offset fTreeFarDistanceBase
0x9F8F34: call    GameSetting_ConstrAndReg_float
0x9F8F39: push    offset GameSetting_fTreeFarDistanceBase_atexit; void (__cdecl *)()
0x9F8F3E: call    _atexit
0x9F8F43: pop     ecx
0x9F8F44: retn

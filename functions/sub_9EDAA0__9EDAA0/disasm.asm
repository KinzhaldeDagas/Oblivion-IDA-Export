0x9EDAA0: fld     ds:flt_A3744C
0x9EDAA6: push    ecx
0x9EDAA7: fstp    [esp+4+var_4]; float
0x9EDAAA: push    offset aFrumbleblockti; "fRumbleBlockTime"
0x9EDAAF: mov     ecx, offset unk_B37C18
0x9EDAB4: call    GameSetting_ConstrAndReg_float
0x9EDAB9: push    offset sub_A1FF50; void (__cdecl *)()
0x9EDABE: call    _atexit
0x9EDAC3: pop     ecx
0x9EDAC4: retn

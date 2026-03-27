0x9EEAA0: fld     ds:flt_A41304
0x9EEAA6: push    ecx
0x9EEAA7: fstp    [esp+4+var_4]; float
0x9EEAAA: push    offset aFmagiccloudfin; "fMagicCloudFindTargetTime"
0x9EEAAF: mov     ecx, offset flt_B37F18
0x9EEAB4: call    GameSetting_ConstrAndReg_float
0x9EEAB9: push    offset sub_A20550; void (__cdecl *)()
0x9EEABE: call    _atexit
0x9EEAC3: pop     ecx
0x9EEAC4: retn

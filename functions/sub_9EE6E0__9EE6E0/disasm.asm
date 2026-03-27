0x9EE6E0: fld     ds:flt_A34ABC
0x9EE6E6: push    ecx
0x9EE6E7: fstp    [esp+4+var_4]; float
0x9EE6EA: push    offset aFmagicboltsegm; "fMagicBoltSegmentLength"
0x9EE6EF: mov     ecx, offset unk_B37E78
0x9EE6F4: call    GameSetting_ConstrAndReg_float
0x9EE6F9: push    offset sub_A20410; void (__cdecl *)()
0x9EE6FE: call    _atexit
0x9EE703: pop     ecx
0x9EE704: retn

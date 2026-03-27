0x9E7EA0: fld     ds:flt_A37CFC
0x9E7EA6: push    ecx
0x9E7EA7: fstp    [esp+4+var_4]; float
0x9E7EAA: push    offset aFvanitymodea_0; "fVanityModeAutoXSpeed"
0x9E7EAF: mov     ecx, offset unk_B36BA0
0x9E7EB4: call    GameSetting_ConstrAndReg_float
0x9E7EB9: push    offset sub_A1DE60; void (__cdecl *)()
0x9E7EBE: call    _atexit
0x9E7EC3: pop     ecx
0x9E7EC4: retn

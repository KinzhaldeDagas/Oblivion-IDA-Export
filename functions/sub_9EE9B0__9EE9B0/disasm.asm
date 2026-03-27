0x9EE9B0: fld     ds:flt_A5BB38
0x9EE9B6: push    ecx
0x9EE9B7: fstp    [esp+4+var_4]; float
0x9EE9BA: push    offset aFmagiccloudspe; "fMagicCloudSpeedBase"
0x9EE9BF: mov     ecx, offset unk_B37EF0
0x9EE9C4: call    GameSetting_ConstrAndReg_float
0x9EE9C9: push    offset sub_A20500; void (__cdecl *)()
0x9EE9CE: call    _atexit
0x9EE9D3: pop     ecx
0x9EE9D4: retn

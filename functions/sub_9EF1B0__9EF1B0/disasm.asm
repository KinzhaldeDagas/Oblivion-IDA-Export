0x9EF1B0: fld     ds:flt_A342A4
0x9EF1B6: push    ecx
0x9EF1B7: fstp    [esp+4+var_4]; float
0x9EF1BA: push    offset aFmagicteleki_3; "fMagicTelekinesisThrow"
0x9EF1BF: mov     ecx, offset fMagicTelekinesisThrow
0x9EF1C4: call    GameSetting_ConstrAndReg_float
0x9EF1C9: push    offset sub_A207B0; void (__cdecl *)()
0x9EF1CE: call    _atexit
0x9EF1D3: pop     ecx
0x9EF1D4: retn

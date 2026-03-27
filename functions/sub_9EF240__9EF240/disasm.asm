0x9EF240: fld     ds:flt_A3D658
0x9EF246: push    ecx
0x9EF247: fstp    [esp+4+var_4]; float
0x9EF24A: push    offset aFmagicteleki_6; "fMagicTelekinesisObjectDamping"
0x9EF24F: mov     ecx, offset fMagicTelekinesisObjectDamping
0x9EF254: call    GameSetting_ConstrAndReg_float
0x9EF259: push    offset sub_A207E0; void (__cdecl *)()
0x9EF25E: call    _atexit
0x9EF263: pop     ecx
0x9EF264: retn

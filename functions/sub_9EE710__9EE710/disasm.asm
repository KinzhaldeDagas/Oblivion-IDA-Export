0x9EE710: fld     ds:flt_A35AA4
0x9EE716: push    ecx
0x9EE717: fstp    [esp+4+var_4]; float
0x9EE71A: push    offset aFmagicboltdura; "fMagicBoltDuration"
0x9EE71F: mov     ecx, offset unk_B37E80
0x9EE724: call    GameSetting_ConstrAndReg_float
0x9EE729: push    offset sub_A20420; void (__cdecl *)()
0x9EE72E: call    _atexit
0x9EE733: pop     ecx
0x9EE734: retn

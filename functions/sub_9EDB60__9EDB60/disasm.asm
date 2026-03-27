0x9EDB60: fld     ds:flt_A3744C
0x9EDB66: push    ecx
0x9EDB67: fstp    [esp+4+var_4]; float
0x9EDB6A: push    offset aFrumblehittime; "fRumbleHitTime"
0x9EDB6F: mov     ecx, offset unk_B37C38
0x9EDB74: call    GameSetting_ConstrAndReg_float
0x9EDB79: push    offset sub_A1FF90; void (__cdecl *)()
0x9EDB7E: call    _atexit
0x9EDB83: pop     ecx
0x9EDB84: retn

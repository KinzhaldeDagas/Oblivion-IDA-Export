0x9EDB30: fld1
0x9EDB32: push    ecx
0x9EDB33: fstp    [esp+4+var_4]; float
0x9EDB36: mov     ecx, offset unk_B37C30
0x9EDB3B: push    offset aFrumblehitbl_0; "fRumbleHitBlockedStrength"
0x9EDB40: call    GameSetting_ConstrAndReg_float
0x9EDB45: push    offset sub_A1FF80; void (__cdecl *)()
0x9EDB4A: call    _atexit
0x9EDB4F: pop     ecx
0x9EDB50: retn

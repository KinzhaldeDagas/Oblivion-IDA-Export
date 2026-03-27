0x9E75B0: fld     ds:flt_A30634
0x9E75B6: push    ecx
0x9E75B7: fstp    [esp+4+var_4]; float
0x9E75BA: push    offset aFlocklevelmult; "fLockLevelMult"
0x9E75BF: mov     ecx, offset unk_B36A10
0x9E75C4: call    GameSetting_ConstrAndReg_float
0x9E75C9: push    offset sub_A1DB40; void (__cdecl *)()
0x9E75CE: call    _atexit
0x9E75D3: pop     ecx
0x9E75D4: retn

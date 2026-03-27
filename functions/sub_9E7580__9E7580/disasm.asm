0x9E7580: fldz
0x9E7582: push    ecx
0x9E7583: fstp    [esp+4+var_4]; float
0x9E7586: mov     ecx, offset unk_B36A08
0x9E758B: push    offset aFlocklevelbase; "fLockLevelBase"
0x9E7590: call    GameSetting_ConstrAndReg_float
0x9E7595: push    offset sub_A1DB30; void (__cdecl *)()
0x9E759A: call    _atexit
0x9E759F: pop     ecx
0x9E75A0: retn

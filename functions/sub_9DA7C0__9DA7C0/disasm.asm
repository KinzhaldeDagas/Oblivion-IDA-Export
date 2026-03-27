0x9DA7C0: fld     ds:flt_A35AA4
0x9DA7C6: push    ecx
0x9DA7C7: fstp    [esp+4+var_4]; float
0x9DA7CA: push    offset aFleveledlockmu; "fLeveledLockMult"
0x9DA7CF: mov     ecx, offset fLeveledLockMult
0x9DA7D4: call    GameSetting_ConstrAndReg_float
0x9DA7D9: push    offset sub_A17920; void (__cdecl *)()
0x9DA7DE: call    _atexit
0x9DA7E3: pop     ecx
0x9DA7E4: retn

0x9E80F0: fld     ds:flt_A3744C
0x9E80F6: push    ecx
0x9E80F7: fstp    [esp+4+var_4]; float
0x9E80FA: push    offset aFactorturnanim; "fActorTurnAnimMinTime"
0x9E80FF: mov     ecx, offset fActorTurnAnimMinTime
0x9E8104: call    GameSetting_ConstrAndReg_float
0x9E8109: push    offset sub_A1DF30; void (__cdecl *)()
0x9E810E: call    _atexit
0x9E8113: pop     ecx
0x9E8114: retn

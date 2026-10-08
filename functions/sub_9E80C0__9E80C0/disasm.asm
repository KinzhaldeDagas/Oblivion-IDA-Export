0x9E80C0: fld     ds:kFaceEarNormalMatchRadius
0x9E80C6: push    ecx
0x9E80C7: fstp    [esp+4+var_4]; float
0x9E80CA: push    offset aFpcturnanimmin; "fPCTurnAnimMinTime"
0x9E80CF: mov     ecx, 0B36C00h
0x9E80D4: call    GameSetting_ConstrAndReg_float
0x9E80D9: push    offset sub_A1DF20; void (__cdecl *)()
0x9E80DE: call    _atexit
0x9E80E3: pop     ecx
0x9E80E4: retn

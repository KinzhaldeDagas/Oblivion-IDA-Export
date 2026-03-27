0x9E74F0: fldz
0x9E74F2: push    ecx
0x9E74F3: fstp    [esp+4+var_4]; float
0x9E74F6: mov     ecx, offset unk_B369F0
0x9E74FB: push    offset aFpicklevelmult; "fPickLevelMult"
0x9E7500: call    GameSetting_ConstrAndReg_float
0x9E7505: push    offset sub_A1DB00; void (__cdecl *)()
0x9E750A: call    _atexit
0x9E750F: pop     ecx
0x9E7510: retn

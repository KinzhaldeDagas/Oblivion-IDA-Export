0x9E69F0: fld1
0x9E69F2: push    ecx
0x9E69F3: fstp    [esp+4+var_4]; float
0x9E69F6: mov     ecx, offset fDispTargetRaceMult
0x9E69FB: push    offset aFdisptargetrac; "fDispTargetRaceMult"
0x9E6A00: call    GameSetting_ConstrAndReg_float
0x9E6A05: push    offset sub_A1D740; void (__cdecl *)()
0x9E6A0A: call    _atexit
0x9E6A0F: pop     ecx
0x9E6A10: retn

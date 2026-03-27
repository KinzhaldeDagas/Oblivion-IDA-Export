0x9E8970: fld     ds:g_DialogueFov?
0x9E8976: push    ecx
0x9E8977: fstp    [esp+4+var_4]; float
0x9E897A: push    offset aFaidodgewalkch; "fAIDodgeWalkChance"
0x9E897F: mov     ecx, offset unk_B36D90
0x9E8984: call    GameSetting_ConstrAndReg_float
0x9E8989: push    offset sub_A1E240; void (__cdecl *)()
0x9E898E: call    _atexit
0x9E8993: pop     ecx
0x9E8994: retn

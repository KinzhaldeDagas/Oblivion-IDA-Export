0x9EBC00: push    0Ah
0x9EBC02: push    offset aIcrimegoldminv; "iCrimeGoldMinValue"
0x9EBC07: mov     ecx, offset unk_B376B8
0x9EBC0C: call    GameSetting_ConstrAndReg
0x9EBC11: push    offset sub_A1F490; void (__cdecl *)()
0x9EBC16: call    _atexit
0x9EBC1B: pop     ecx
0x9EBC1C: retn

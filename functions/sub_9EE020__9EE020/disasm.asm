0x9EE020: push    0Fh
0x9EE022: push    offset aIremoveexcessd; "iRemoveExcessDeadCount"
0x9EE027: mov     ecx, offset dword_B37D48
0x9EE02C: call    GameSetting_ConstrAndReg
0x9EE031: push    offset sub_A201B0; void (__cdecl *)()
0x9EE036: call    _atexit
0x9EE03B: pop     ecx
0x9EE03C: retn

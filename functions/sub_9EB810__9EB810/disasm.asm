0x9EB810: push    0FFFFFFFFh
0x9EB812: push    offset aIbarterdisposi; "iBarterDispositionPenalty"
0x9EB817: mov     ecx, offset iBarterDispositionPenalty
0x9EB81C: call    GameSetting_ConstrAndReg
0x9EB821: push    offset sub_A1F2E0; void (__cdecl *)()
0x9EB826: call    _atexit
0x9EB82B: pop     ecx
0x9EB82C: retn

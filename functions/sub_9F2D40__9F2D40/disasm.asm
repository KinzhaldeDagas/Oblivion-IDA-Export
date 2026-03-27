0x9F2D40: push    offset aRejectsYourYie; "rejects your yield!"
0x9F2D45: push    offset aSyieldrejected; "sYieldRejected"
0x9F2D4A: mov     ecx, offset sYieldRejected
0x9F2D4F: call    GameSetting_ConstrAndReg
0x9F2D54: push    offset sub_A222D0; void (__cdecl *)()
0x9F2D59: call    _atexit
0x9F2D5E: pop     ecx
0x9F2D5F: retn

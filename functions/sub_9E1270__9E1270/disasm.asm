0x9E1270: push    offset aYouFindNothing; "You find nothing of use."
0x9E1275: push    offset aSflorafailurem; "sFloraFailureMessage"
0x9E127A: mov     ecx, offset sFloraFailureMessage
0x9E127F: call    GameSetting_ConstrAndReg
0x9E1284: push    offset sub_A1AE60; void (__cdecl *)()
0x9E1289: call    _atexit
0x9E128E: pop     ecx
0x9E128F: retn

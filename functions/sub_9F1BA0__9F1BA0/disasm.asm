0x9F1BA0: push    offset aYouMustFirst_0; "You must first enter a valid name for t"...
0x9F1BA5: push    offset aSnoname; "sNoName"
0x9F1BAA: mov     ecx, offset sNoName
0x9F1BAF: call    GameSetting_ConstrAndReg
0x9F1BB4: push    offset sub_A21AC0; void (__cdecl *)()
0x9F1BB9: call    _atexit
0x9F1BBE: pop     ecx
0x9F1BBF: retn

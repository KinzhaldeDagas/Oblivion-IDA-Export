0x9F9BA0: push    offset aWillpowerDescr; "Willpower Description"
0x9F9BA5: push    offset aSattributede_1; "sAttributeDescWillpower"
0x9F9BAA: mov     ecx, offset sAttributeDescWillpower
0x9F9BAF: call    GameSetting_ConstrAndReg
0x9F9BB4: push    offset sub_A23B40; void (__cdecl *)()
0x9F9BB9: call    _atexit
0x9F9BBE: pop     ecx
0x9F9BBF: retn

0x9F2E20: push    offset aDefaultMessage; "DEFAULT MESSAGE TEXT"
0x9F2E25: push    offset aSdefaultmessag; "sDefaultMessage"
0x9F2E2A: mov     ecx, offset sDefaultMessage
0x9F2E2F: call    GameSetting_ConstrAndReg
0x9F2E34: push    offset sub_A22340; void (__cdecl *)()
0x9F2E39: call    _atexit
0x9F2E3E: pop     ecx
0x9F2E3F: retn

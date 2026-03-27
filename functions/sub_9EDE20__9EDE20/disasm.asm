0x9EDE20: push    23997h
0x9EDE25: push    offset aIclassbattlema; "iClassBattlemage"
0x9EDE2A: mov     ecx, offset iClassBattlemage
0x9EDE2F: call    GameSetting_ConstrAndReg
0x9EDE34: push    offset sub_A200E0; void (__cdecl *)()
0x9EDE39: call    _atexit
0x9EDE3E: pop     ecx
0x9EDE3F: retn

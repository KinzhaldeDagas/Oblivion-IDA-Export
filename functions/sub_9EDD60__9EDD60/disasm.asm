0x9EDD60: push    2378Ah
0x9EDD65: push    offset aIclassscout; "iClassScout"
0x9EDD6A: mov     ecx, offset iClassScout
0x9EDD6F: call    GameSetting_ConstrAndReg
0x9EDD74: push    offset sub_A20080; void (__cdecl *)()
0x9EDD79: call    _atexit
0x9EDD7E: pop     ecx
0x9EDD7F: retn

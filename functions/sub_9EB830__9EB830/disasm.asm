0x9EB830: push    0C8h ; 'È'
0x9EB835: push    offset aIperkextrabart; "iPerkExtraBarterGoldMaster"
0x9EB83A: mov     ecx, offset iPerkExtraBarterGoldMaster
0x9EB83F: call    GameSetting_ConstrAndReg
0x9EB844: push    offset sub_A1F2F0; void (__cdecl *)()
0x9EB849: call    _atexit
0x9EB84E: pop     ecx
0x9EB84F: retn

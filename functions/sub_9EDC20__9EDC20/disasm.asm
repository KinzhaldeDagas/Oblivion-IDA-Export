0x9EDC20: push    832h
0x9EDC25: push    offset aIclasspilgrim; "iClassPilgrim"
0x9EDC2A: mov     ecx, offset iClassPilgrim
0x9EDC2F: call    GameSetting_ConstrAndReg
0x9EDC34: push    offset sub_A1FFE0; void (__cdecl *)()
0x9EDC39: call    _atexit
0x9EDC3E: pop     ecx
0x9EDC3F: retn

0x9EDC80: push    105D6h
0x9EDC85: push    offset aIclassmage; "iClassMage"
0x9EDC8A: mov     ecx, offset iClassMage
0x9EDC8F: call    GameSetting_ConstrAndReg
0x9EDC94: push    offset sub_A20010; void (__cdecl *)()
0x9EDC99: call    _atexit
0x9EDC9E: pop     ecx
0x9EDC9F: retn

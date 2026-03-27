0x9F0410: push    offset aInfamy; "Infamy:"
0x9F0415: push    offset aSmiscinfamy; "sMiscInfamy"
0x9F041A: mov     ecx, offset dword_B383F0
0x9F041F: call    GameSetting_ConstrAndReg
0x9F0424: push    offset sub_A20F00; void (__cdecl *)()
0x9F0429: call    _atexit
0x9F042E: pop     ecx
0x9F042F: retn

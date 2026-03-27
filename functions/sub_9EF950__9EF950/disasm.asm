0x9EF950: push    1
0x9EF952: push    offset aIshocksubsegme; "iShockSubSegments"
0x9EF957: mov     ecx, offset iShockSubSegments
0x9EF95C: call    GameSetting_ConstrAndReg
0x9EF961: push    offset sub_A20A60; void (__cdecl *)()
0x9EF966: call    _atexit
0x9EF96B: pop     ecx
0x9EF96C: retn

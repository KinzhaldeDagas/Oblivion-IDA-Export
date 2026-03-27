0x9F2E00: push    offset aIsBeingDrained; "is being drained"
0x9F2E05: push    offset aSattributedrai; "sAttributeDrained"
0x9F2E0A: mov     ecx, offset sAttributeDrained
0x9F2E0F: call    GameSetting_ConstrAndReg
0x9F2E14: push    offset sub_A22330; void (__cdecl *)()
0x9F2E19: call    _atexit
0x9F2E1E: pop     ecx
0x9F2E1F: retn

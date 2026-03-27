0x9EA720: push    offset aIsCalmedAndCan; "is calmed and cannot respond."
0x9EA725: push    offset aSactivatenpcca; "sActivateNPCCalmed"
0x9EA72A: mov     ecx, offset sActivateNPCCalmed
0x9EA72F: call    GameSetting_ConstrAndReg
0x9EA734: push    offset sub_A1ED10; void (__cdecl *)()
0x9EA739: call    _atexit
0x9EA73E: pop     ecx
0x9EA73F: retn

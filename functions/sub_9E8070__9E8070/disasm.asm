0x9E8070: push    0Ah
0x9E8072: push    offset aIinventorymenu; "iInventoryMenuIdleDelay"
0x9E8077: mov     ecx, offset unk_B36BF0
0x9E807C: call    GameSetting_ConstrAndReg
0x9E8081: push    offset sub_A1DF00; void (__cdecl *)()
0x9E8086: call    _atexit
0x9E808B: pop     ecx
0x9E808C: retn

0x9F1560: push    offset aRepairThisItem; "Repair this item for"
0x9F1565: push    offset aSconfirmrepair; "sConfirmRepair"
0x9F156A: mov     ecx, offset dword_B38840
0x9F156F: call    GameSetting_ConstrAndReg
0x9F1574: push    offset sub_A217A0; void (__cdecl *)()
0x9F1579: call    _atexit
0x9F157E: pop     ecx
0x9F157F: retn

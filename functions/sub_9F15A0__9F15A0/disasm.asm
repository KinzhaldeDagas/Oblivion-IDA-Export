0x9F15A0: push    offset aRepairAllItems; "Repair all items for"
0x9F15A5: push    offset aSconfirmrepa_0; "sConfirmRepairAll"
0x9F15AA: mov     ecx, offset dword_B38850
0x9F15AF: call    GameSetting_ConstrAndReg
0x9F15B4: push    offset sub_A217C0; void (__cdecl *)()
0x9F15B9: call    _atexit
0x9F15BE: pop     ecx
0x9F15BF: retn

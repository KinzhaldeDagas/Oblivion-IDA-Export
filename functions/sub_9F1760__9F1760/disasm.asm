0x9F1760: push    offset aDoYouWantToPoi; "Do you want to poison the "
0x9F1765: push    offset aSpoisonconfirm; "sPoisonConfirmMessage"
0x9F176A: mov     ecx, offset dword_B388C0
0x9F176F: call    GameSetting_ConstrAndReg
0x9F1774: push    offset sub_A218A0; void (__cdecl *)()
0x9F1779: call    _atexit
0x9F177E: pop     ecx
0x9F177F: retn

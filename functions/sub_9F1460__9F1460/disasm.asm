0x9F1460: push    offset aYesRestartTheG; "Yes, restart the game."
0x9F1465: push    offset aSyesrestart; "sYesRestart"
0x9F146A: mov     ecx, offset unk_B38800
0x9F146F: call    GameSetting_ConstrAndReg
0x9F1474: push    offset sub_A21720; void (__cdecl *)()
0x9F1479: call    _atexit
0x9F147E: pop     ecx
0x9F147F: retn

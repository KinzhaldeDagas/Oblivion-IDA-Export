0x9F1520: push    offset aLoadingExtraCo; "Loading extra content. Please wait."
0x9F1525: push    offset aSloadingconten; "sLoadingContentMessage"
0x9F152A: mov     ecx, offset unk_B38830
0x9F152F: call    GameSetting_ConstrAndReg
0x9F1534: push    offset sub_A21780; void (__cdecl *)()
0x9F1539: call    _atexit
0x9F153E: pop     ecx
0x9F153F: retn

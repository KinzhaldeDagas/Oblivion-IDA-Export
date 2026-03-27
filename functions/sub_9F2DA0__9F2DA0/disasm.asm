0x9F2DA0: push    offset aYouHaveCapture; "You have captured a soul!"
0x9F2DA5: push    offset aSsoulcaptured; "sSoulCaptured"
0x9F2DAA: mov     ecx, offset sSoulCaptured
0x9F2DAF: call    GameSetting_ConstrAndReg
0x9F2DB4: push    offset sub_A22300; void (__cdecl *)()
0x9F2DB9: call    _atexit
0x9F2DBE: pop     ecx
0x9F2DBF: retn

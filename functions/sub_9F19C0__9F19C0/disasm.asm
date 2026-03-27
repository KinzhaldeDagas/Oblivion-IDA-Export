0x9F19C0: push    offset aRange; "Range"
0x9F19C5: push    offset aSrangetext; "sRangeText"
0x9F19CA: mov     ecx, offset sRangeText
0x9F19CF: call    GameSetting_ConstrAndReg
0x9F19D4: push    offset sub_A219D0; void (__cdecl *)()
0x9F19D9: call    _atexit
0x9F19DE: pop     ecx
0x9F19DF: retn

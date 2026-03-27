0x9D9F80: push    offset aStrike; "Strike"
0x9D9F85: push    offset aSmagicrangestr; "sMagicRangeStrike"
0x9D9F8A: mov     ecx, offset sMagicRangeStrike
0x9D9F8F: call    GameSetting_ConstrAndReg
0x9D9F94: push    offset sub_A17560; void (__cdecl *)()
0x9D9F99: call    _atexit
0x9D9F9E: pop     ecx
0x9D9F9F: retn

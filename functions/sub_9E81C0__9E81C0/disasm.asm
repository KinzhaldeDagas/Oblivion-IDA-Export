0x9E81C0: push    24h ; '$'
0x9E81C2: push    offset aIlowresponsibl; "iLowResponsiblityLevel"
0x9E81C7: mov     ecx, offset dword_B36C30
0x9E81CC: call    GameSetting_ConstrAndReg
0x9E81D1: push    offset sub_A1DF80; void (__cdecl *)()
0x9E81D6: call    _atexit
0x9E81DB: pop     ecx
0x9E81DC: retn

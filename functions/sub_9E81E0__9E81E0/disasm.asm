0x9E81E0: push    32h ; '2'
0x9E81E2: push    offset aImediumrespons; "iMediumResponsiblityLevel"
0x9E81E7: mov     ecx, offset unk_B36C38
0x9E81EC: call    GameSetting_ConstrAndReg
0x9E81F1: push    offset sub_A1DF90; void (__cdecl *)()
0x9E81F6: call    _atexit
0x9E81FB: pop     ecx
0x9E81FC: retn

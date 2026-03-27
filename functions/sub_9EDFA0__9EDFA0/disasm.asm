0x9EDFA0: push    96h ; '–'
0x9EDFA5: push    offset aIactivatepickl; "iActivatePickLength"
0x9EDFAA: mov     ecx, offset dword_B37D30
0x9EDFAF: call    GameSetting_ConstrAndReg
0x9EDFB4: push    offset sub_A20180; void (__cdecl *)()
0x9EDFB9: call    _atexit
0x9EDFBE: pop     ecx
0x9EDFBF: retn

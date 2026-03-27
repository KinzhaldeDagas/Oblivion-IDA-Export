0x9E5D10: push    5Eh ; '^'
0x9E5D12: push    offset aImassersize; "iMasserSize"
0x9E5D17: mov     ecx, offset dword_B365F0
0x9E5D1C: call    GameSetting_ConstrAndReg
0x9E5D21: push    offset sub_A1D2B0; void (__cdecl *)()
0x9E5D26: call    _atexit
0x9E5D2B: pop     ecx
0x9E5D2C: retn

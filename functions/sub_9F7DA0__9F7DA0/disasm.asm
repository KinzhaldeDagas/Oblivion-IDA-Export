0x9F7DA0: push    offset aPause; "Pause"
0x9F7DA5: push    offset aSpausetext; "sPauseText"
0x9F7DAA: mov     ecx, offset unk_B394D0
0x9F7DAF: call    GameSetting_ConstrAndReg
0x9F7DB4: push    offset sub_A230C0; void (__cdecl *)()
0x9F7DB9: call    _atexit
0x9F7DBE: pop     ecx
0x9F7DBF: retn

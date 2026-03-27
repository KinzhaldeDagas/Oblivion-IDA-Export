0x9F2F90: push    2710h
0x9F2F95: push    offset aIbribeamountma; "iBribeAmountMax"
0x9F2F9A: mov     ecx, offset iBribeAmountMax
0x9F2F9F: call    GameSetting_ConstrAndReg
0x9F2FA4: push    offset sub_A223C0; void (__cdecl *)()
0x9F2FA9: call    _atexit
0x9F2FAE: pop     ecx
0x9F2FAF: retn

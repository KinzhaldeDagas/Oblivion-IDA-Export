0x9F0550: push    offset aDaysJailed; "Days Jailed: "
0x9F0555: push    offset aSmiscdaysjaile; "sMiscDaysJailed"
0x9F055A: mov     ecx, offset sMiscDaysJailed
0x9F055F: call    GameSetting_ConstrAndReg
0x9F0564: push    offset sub_A20FA0; void (__cdecl *)()
0x9F0569: call    _atexit
0x9F056E: pop     ecx
0x9F056F: retn

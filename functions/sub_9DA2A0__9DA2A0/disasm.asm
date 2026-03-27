0x9DA2A0: push    offset aLesserPower; "Lesser Power"
0x9DA2A5: push    offset aSmagictypeless; "sMagicTypeLesserPower"
0x9DA2AA: mov     ecx, offset sMagicTypeLesserPower
0x9DA2AF: call    GameSetting_ConstrAndReg
0x9DA2B4: push    offset sub_A176F0; void (__cdecl *)()
0x9DA2B9: call    _atexit
0x9DA2BE: pop     ecx
0x9DA2BF: retn

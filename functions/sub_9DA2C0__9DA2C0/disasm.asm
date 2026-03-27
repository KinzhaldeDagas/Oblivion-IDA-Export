0x9DA2C0: push    offset aPower; "Power"
0x9DA2C5: push    offset aSmagictypepowe; "sMagicTypePower"
0x9DA2CA: mov     ecx, offset sMagicTypePower
0x9DA2CF: call    GameSetting_ConstrAndReg
0x9DA2D4: push    offset sub_A17700; void (__cdecl *)()
0x9DA2D9: call    _atexit
0x9DA2DE: pop     ecx
0x9DA2DF: retn

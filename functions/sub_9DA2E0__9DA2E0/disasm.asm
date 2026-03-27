0x9DA2E0: push    offset aPoison; "Poison"
0x9DA2E5: push    offset aSmagictypepois; "sMagicTypePoison"
0x9DA2EA: mov     ecx, offset sMagicTypePoison
0x9DA2EF: call    GameSetting_ConstrAndReg
0x9DA2F4: push    offset sub_A17710; void (__cdecl *)()
0x9DA2F9: call    _atexit
0x9DA2FE: pop     ecx
0x9DA2FF: retn

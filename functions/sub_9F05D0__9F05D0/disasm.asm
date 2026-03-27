0x9F05D0: push    offset aItemsPickpocke; "Items Pickpocketed: "
0x9F05D5: push    offset aSmiscnumpocket; "sMiscNumPocketsPicked"
0x9F05DA: mov     ecx, offset sMiscNumPocketsPicked
0x9F05DF: call    GameSetting_ConstrAndReg
0x9F05E4: push    offset sub_A20FE0; void (__cdecl *)()
0x9F05E9: call    _atexit
0x9F05EE: pop     ecx
0x9F05EF: retn

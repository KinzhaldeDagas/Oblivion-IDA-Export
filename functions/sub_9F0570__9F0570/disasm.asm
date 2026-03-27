0x9F0570: push    offset aItemsStolen; "Items Stolen: "
0x9F0575: push    offset aSmiscnumthefts; "sMiscNumThefts"
0x9F057A: mov     ecx, offset sMiscNumThefts
0x9F057F: call    GameSetting_ConstrAndReg
0x9F0584: push    offset sub_A20FB0; void (__cdecl *)()
0x9F0589: call    _atexit
0x9F058E: pop     ecx
0x9F058F: retn

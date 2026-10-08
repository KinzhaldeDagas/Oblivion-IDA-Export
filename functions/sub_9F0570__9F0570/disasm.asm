0x9F0570: push    offset aItemsStolen; "Items Stolen: "
0x9F0575: push    offset aSmiscnumthefts; "sMiscNumThefts"
0x9F057A: mov     ecx, 0B38448h; self
0x9F057F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0584: push    offset sub_A20FB0; void (__cdecl *)()
0x9F0589: call    _atexit
0x9F058E: pop     ecx
0x9F058F: retn

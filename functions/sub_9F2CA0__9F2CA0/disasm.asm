0x9F2CA0: push    offset aYouDoNotHave_0; "You do not have enough gold."
0x9F2CA5: push    offset aSnotenoughgold; "sNotEnoughGold"
0x9F2CAA: mov     ecx, 0B38DB0h; self
0x9F2CAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2CB4: push    offset sub_A22280; void (__cdecl *)()
0x9F2CB9: call    _atexit
0x9F2CBE: pop     ecx
0x9F2CBF: retn

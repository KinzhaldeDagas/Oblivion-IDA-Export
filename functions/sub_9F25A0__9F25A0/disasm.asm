0x9F25A0: push    offset aYouCannotGoTha; "You cannot go that way."
0x9F25A5: push    offset aSplayerleaving; "sPlayerLeavingBorderRegion"
0x9F25AA: mov     ecx, offset stru_B38BF0; self
0x9F25AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F25B4: push    offset sub_A21F00; void (__cdecl *)()
0x9F25B9: call    _atexit
0x9F25BE: pop     ecx
0x9F25BF: retn

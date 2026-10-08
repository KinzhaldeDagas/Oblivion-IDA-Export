0x9F7D60: push    offset aYouCanNotEatQu; "You can not eat quest items."
0x9F7D65: push    offset aSnoeatquestite; "sNoEatQuestItem"
0x9F7D6A: mov     ecx, 0B394C0h; self
0x9F7D6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7D74: push    offset sub_A230A0; void (__cdecl *)()
0x9F7D79: call    _atexit
0x9F7D7E: pop     ecx
0x9F7D7F: retn

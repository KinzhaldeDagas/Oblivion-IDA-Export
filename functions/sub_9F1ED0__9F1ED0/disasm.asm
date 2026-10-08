0x9F1ED0: push    offset aYouCannotUnequ; "You cannot unequip this item."
0x9F1ED5: push    offset aScantunequipge; "sCantUnequipGeneric"
0x9F1EDA: mov     ecx, 0B38A40h; self
0x9F1EDF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1EE4: push    offset sub_A21BA0; void (__cdecl *)()
0x9F1EE9: call    _atexit
0x9F1EEE: pop     ecx
0x9F1EEF: retn

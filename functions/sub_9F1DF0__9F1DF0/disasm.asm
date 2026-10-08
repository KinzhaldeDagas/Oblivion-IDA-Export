0x9F1DF0: push    offset aYouCannotDropA; "You cannot drop an equiped item until y"...
0x9F1DF5: push    offset aSdropequippedi; "sDropEquippedItemWarning"
0x9F1DFA: mov     ecx, offset stru_B38A08; self
0x9F1DFF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1E04: push    offset sub_A21B30; void (__cdecl *)()
0x9F1E09: call    _atexit
0x9F1E0E: pop     ecx
0x9F1E0F: retn

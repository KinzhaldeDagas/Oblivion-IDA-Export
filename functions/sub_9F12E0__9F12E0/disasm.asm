0x9F12E0: push    offset aYouCanTQuicksa; "You can't Quicksave while the game is p"...
0x9F12E5: push    offset aScantquicksave; "sCantQuickSave"
0x9F12EA: mov     ecx, offset stru_B387A0; self
0x9F12EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F12F4: push    offset sub_A21660; void (__cdecl *)()
0x9F12F9: call    _atexit
0x9F12FE: pop     ecx
0x9F12FF: retn

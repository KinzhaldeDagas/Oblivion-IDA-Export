0x9F2680: push    offset aThereIsNoSoulG; "There is no Soul Gem large enough to ca"...
0x9F2685: push    offset aSsoulgemtoosma; "sSoulGemTooSmall"
0x9F268A: mov     ecx, offset stru_B38C28; self
0x9F268F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2694: push    offset sub_A21F70; void (__cdecl *)()
0x9F2699: call    _atexit
0x9F269E: pop     ecx
0x9F269F: retn

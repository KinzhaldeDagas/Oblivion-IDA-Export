0x9F0F40: push    offset aSaveLocationFu; "Save location full. Disabling Autosave."
0x9F0F45: push    offset aSautosavedisab; "sAutoSaveDisabledDueToLackOfSpace"
0x9F0F4A: mov     ecx, offset stru_B386B8; self
0x9F0F4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0F54: push    offset sub_A21490; void (__cdecl *)()
0x9F0F59: call    _atexit
0x9F0F5E: pop     ecx
0x9F0F5F: retn

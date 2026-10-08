0x9F0A70: push    offset aEquipped_; " equipped."
0x9F0A75: push    offset aSscrollequippe; "sScrollEquipped"
0x9F0A7A: mov     ecx, offset stru_B38588; self
0x9F0A7F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0A84: push    offset sub_A21230; void (__cdecl *)()
0x9F0A89: call    _atexit
0x9F0A8E: pop     ecx
0x9F0A8F: retn

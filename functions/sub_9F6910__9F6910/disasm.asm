0x9F6910: push    offset aStyle; "Style"
0x9F6915: push    offset aSstyle; "sStyle"
0x9F691A: mov     ecx, offset stru_B38FB8; self
0x9F691F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6924: push    offset sub_A22690; void (__cdecl *)()
0x9F6929: call    _atexit
0x9F692E: pop     ecx
0x9F692F: retn

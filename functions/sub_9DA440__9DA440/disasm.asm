0x9DA440: push    offset aBall; "Ball"
0x9DA445: push    offset aSmagicprojecti; "sMagicProjectileTypeBall"
0x9DA44A: mov     ecx, 0B3366Ch; self
0x9DA44F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA454: push    offset sub_A177C0; void (__cdecl *)()
0x9DA459: call    _atexit
0x9DA45E: pop     ecx
0x9DA45F: retn

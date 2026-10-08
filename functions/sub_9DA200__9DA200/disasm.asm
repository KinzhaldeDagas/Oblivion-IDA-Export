0x9DA200: push    offset aMysticism; "Mysticism"
0x9DA205: push    offset aSmagicschoolmy; "sMagicSchoolMysticism"
0x9DA20A: mov     ecx, 0B335DCh; self
0x9DA20F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA214: push    offset sub_A176A0; void (__cdecl *)()
0x9DA219: call    _atexit
0x9DA21E: pop     ecx
0x9DA21F: retn

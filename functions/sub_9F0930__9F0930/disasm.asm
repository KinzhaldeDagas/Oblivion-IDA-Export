0x9F0930: push    offset aNirnrootsFound; "Nirnroots Found: "
0x9F0935: push    offset aSmiscnirnroots; "sMiscNirnrootsFound"
0x9F093A: mov     ecx, 0B38538h; self
0x9F093F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0944: push    offset sub_A21190; void (__cdecl *)()
0x9F0949: call    _atexit
0x9F094E: pop     ecx
0x9F094F: retn

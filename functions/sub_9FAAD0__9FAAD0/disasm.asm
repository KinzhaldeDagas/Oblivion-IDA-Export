0x9FAAD0: push    offset aExpert; "Expert"
0x9FAAD5: push    offset aSskilllevelexp; "sSkillLevelExpert"
0x9FAADA: mov     ecx, 0B3A4E8h; self
0x9FAADF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FAAE4: push    offset sub_A24200; void (__cdecl *)()
0x9FAAE9: call    _atexit
0x9FAAEE: pop     ecx
0x9FAAEF: retn

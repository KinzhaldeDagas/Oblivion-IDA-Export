0x9FAAB0: push    offset aJourneyman; "Journeyman"
0x9FAAB5: push    offset aSskillleveljou; "sSkillLevelJourneyman"
0x9FAABA: mov     ecx, 0B3A4E0h; self
0x9FAABF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FAAC4: push    offset sub_A241F0; void (__cdecl *)()
0x9FAAC9: call    _atexit
0x9FAACE: pop     ecx
0x9FAACF: retn

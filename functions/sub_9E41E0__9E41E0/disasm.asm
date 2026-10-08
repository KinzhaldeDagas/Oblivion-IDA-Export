0x9E41E0: push    offset aYouHaveABasicU; "You have a basic understanding of this "...
0x9E41E5: push    offset aSnoviceskillle; "sNoviceSkillLevelText"
0x9E41EA: mov     ecx, 0B36500h; self
0x9E41EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E41F4: push    offset sub_A1C4D0; void (__cdecl *)()
0x9E41F9: call    _atexit
0x9E41FE: pop     ecx
0x9E41FF: retn

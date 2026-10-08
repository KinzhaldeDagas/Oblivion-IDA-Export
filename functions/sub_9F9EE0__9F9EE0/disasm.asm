0x9F9EE0: push    offset aMarksmanDescri; "Marksman Description"
0x9F9EE5: push    offset aSskilldescmark; "sSkillDescMarksman"
0x9F9EEA: mov     ecx, 0B3A254h; self
0x9F9EEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9EF4: push    offset sub_A23CE0; void (__cdecl *)()
0x9F9EF9: call    _atexit
0x9F9EFE: pop     ecx
0x9F9EFF: retn

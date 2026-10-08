0x9FAAF0: push    offset aMaster; "Master"
0x9FAAF5: push    offset aSskilllevelmas; "sSkillLevelMaster"
0x9FAAFA: mov     ecx, 0B3A4F0h; self
0x9FAAFF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FAB04: push    offset sub_A24210; void (__cdecl *)()
0x9FAB09: call    _atexit
0x9FAB0E: pop     ecx
0x9FAB0F: retn

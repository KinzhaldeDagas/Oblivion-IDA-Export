0x9F0830: push    offset aSkillBooksRead; "Skill Books Read: "
0x9F0835: push    offset aSmiscnumskillb; "sMiscNumSkillBooksRead"
0x9F083A: mov     ecx, offset stru_B384F8; self
0x9F083F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0844: push    offset sub_A21110; void (__cdecl *)()
0x9F0849: call    _atexit
0x9F084E: pop     ecx
0x9F084F: retn

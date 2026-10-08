0x9F0390: push    offset aLevel; "Level: "
0x9F0395: push    offset aSskilllevel; "sSkillLevel"
0x9F039A: mov     ecx, offset stru_B383D0; self
0x9F039F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F03A4: push    offset sub_A20EC0; void (__cdecl *)()
0x9F03A9: call    _atexit
0x9F03AE: pop     ecx
0x9F03AF: retn

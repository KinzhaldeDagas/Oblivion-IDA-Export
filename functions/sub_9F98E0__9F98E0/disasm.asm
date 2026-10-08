0x9F98E0: push    offset aAlteration; "Alteration"
0x9F98E5: push    offset aSskillnamealte; "sSkillNameAlteration"
0x9F98EA: mov     ecx, offset g_sSkillNameAlteration; self
0x9F98EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F98F4: push    offset sub_A239E0; void (__cdecl *)()
0x9F98F9: call    _atexit
0x9F98FE: pop     ecx
0x9F98FF: retn

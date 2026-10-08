0x9F9900: push    offset aConjuration; "Conjuration"
0x9F9905: push    offset aSskillnameconj; "sSkillNameConjuration"
0x9F990A: mov     ecx, offset g_sSkillNameConjuration; self
0x9F990F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9914: push    offset sub_A239F0; void (__cdecl *)()
0x9F9919: call    _atexit
0x9F991E: pop     ecx
0x9F991F: retn

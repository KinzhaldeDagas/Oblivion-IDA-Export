0x9F9A60: push    offset aSpeechcraft; Register sSkillNameSpeechcraft, the final native skill-name setting corresponding to SkillActorValue 0x20.
0x9F9A65: push    offset aSskillnamespee; "sSkillNameSpeechcraft"
0x9F9A6A: mov     ecx, offset g_sSkillNameSpeechcraft; self
0x9F9A6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9A74: push    offset sub_A23AA0; void (__cdecl *)()
0x9F9A79: call    _atexit
0x9F9A7E: pop     ecx
0x9F9A7F: retn

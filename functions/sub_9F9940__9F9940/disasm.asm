0x9F9940: push    offset aIllusion; "Illusion"
0x9F9945: push    offset aSskillnameillu; "sSkillNameIllusion"
0x9F994A: mov     ecx, offset g_sSkillNameIllusion; self
0x9F994F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9954: push    offset sub_A23A10; void (__cdecl *)()
0x9F9959: call    _atexit
0x9F995E: pop     ecx
0x9F995F: retn

0x9F9920: push    offset aDestruction; "Destruction"
0x9F9925: push    offset aSskillnamedest; "sSkillNameDestruction"
0x9F992A: mov     ecx, offset g_sSkillNameDestruction; self
0x9F992F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9934: push    offset sub_A23A00; void (__cdecl *)()
0x9F9939: call    _atexit
0x9F993E: pop     ecx
0x9F993F: retn

0x9F99E0: push    offset aMarksman; "Marksman"
0x9F99E5: push    offset aSskillnamemark; "sSkillNameMarksman"
0x9F99EA: mov     ecx, offset g_sSkillNameMarksman; self
0x9F99EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F99F4: push    offset sub_A23A60; void (__cdecl *)()
0x9F99F9: call    _atexit
0x9F99FE: pop     ecx
0x9F99FF: retn

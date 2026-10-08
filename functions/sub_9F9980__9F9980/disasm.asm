0x9F9980: push    offset aRestoration; "Restoration"
0x9F9985: push    offset aSskillnamerest; "sSkillNameRestoration"
0x9F998A: mov     ecx, offset g_sSkillNameRestoration; self
0x9F998F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9994: push    offset sub_A23A30; void (__cdecl *)()
0x9F9999: call    _atexit
0x9F999E: pop     ecx
0x9F999F: retn

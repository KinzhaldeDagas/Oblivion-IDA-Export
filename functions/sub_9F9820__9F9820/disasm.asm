0x9F9820: push    offset aBlade; defaultValue
0x9F9825: push    offset aSskillnameblad; "sSkillNameBlade"
0x9F982A: mov     ecx, offset g_sSkillNameBlade; self
0x9F982F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9834: push    offset sub_A23980; void (__cdecl *)()
0x9F9839: call    _atexit
0x9F983E: pop     ecx
0x9F983F: retn

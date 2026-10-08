0x9F9CE0: push    offset aArmorerDescrip; "Armorer Description"
0x9F9CE5: push    offset aSskilldescarmo; "sSkillDescArmorer"
0x9F9CEA: mov     ecx, 0B3A1D4h; self
0x9F9CEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9CF4: push    offset sub_A23BE0; void (__cdecl *)()
0x9F9CF9: call    _atexit
0x9F9CFE: pop     ecx
0x9F9CFF: retn

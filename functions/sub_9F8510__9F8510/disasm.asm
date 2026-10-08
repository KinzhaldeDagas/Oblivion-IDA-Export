0x9F8510: push    offset aFemale; "Female"
0x9F8515: push    offset aSfemale; "sFemale"
0x9F851A: mov     ecx, 0B39528h; self
0x9F851F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F8524: push    offset sub_A23170; void (__cdecl *)()
0x9F8529: call    _atexit
0x9F852E: pop     ecx
0x9F852F: retn

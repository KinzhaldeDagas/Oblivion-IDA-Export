0x9F06D0: push    offset aJourneymanSkil; "Journeyman Skills: "
0x9F06D5: push    offset aSmiscjourneyma; "sMiscJourneymanSkills"
0x9F06DA: mov     ecx, 0B384A0h; self
0x9F06DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F06E4: push    offset sub_A21060; void (__cdecl *)()
0x9F06E9: call    _atexit
0x9F06EE: pop     ecx
0x9F06EF: retn

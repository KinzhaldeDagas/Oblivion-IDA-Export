0x9F04D0: push    offset aPeopleKilled; "People Killed: "
0x9F04D5: push    offset aSmiscnumperson; "sMiscNumPersonKills"
0x9F04DA: mov     ecx, 0B38420h; self
0x9F04DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F04E4: push    offset sub_A20F60; void (__cdecl *)()
0x9F04E9: call    _atexit
0x9F04EE: pop     ecx
0x9F04EF: retn

0x9F0590: push    offset aTrespasses; "Trespasses: "
0x9F0595: push    offset aSmiscnumtrespa; "sMiscNumTrespasses"
0x9F059A: mov     ecx, 0B38450h; self
0x9F059F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F05A4: push    offset sub_A20FC0; void (__cdecl *)()
0x9F05A9: call    _atexit
0x9F05AE: pop     ecx
0x9F05AF: retn

0x9F01B0: push    offset aItSTheMostAmaz; "It's the most amazing thing. Yesterday "...
0x9F01B5: push    offset aSlevelup13; "sLevelUp13"
0x9F01BA: mov     ecx, offset stru_B38358; self
0x9F01BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F01C4: push    offset sub_A20DD0; void (__cdecl *)()
0x9F01C9: call    _atexit
0x9F01CE: pop     ecx
0x9F01CF: retn

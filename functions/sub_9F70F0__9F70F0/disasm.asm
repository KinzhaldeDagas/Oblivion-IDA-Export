0x9F70F0: push    offset aMouthChinDista; "Mouth-Chin distance short/long"
0x9F70F5: push    offset aSmouthchin; "sMouthChin"
0x9F70FA: mov     ecx, offset stru_B391B0; self
0x9F70FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7104: push    offset sub_A22A80; void (__cdecl *)()
0x9F7109: call    _atexit
0x9F710E: pop     ecx
0x9F710F: retn

0x9F2760: push    offset aDoYouWantToTra; "Do you want to travel to"
0x9F2765: push    offset aStravelquestio; "sTravelQuestion"
0x9F276A: mov     ecx, offset stru_B38C60; self
0x9F276F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2774: push    offset sub_A21FE0; void (__cdecl *)()
0x9F2779: call    _atexit
0x9F277E: pop     ecx
0x9F277F: retn

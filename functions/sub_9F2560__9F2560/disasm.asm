0x9F2560: push    offset aCurrentSoulLev; "Current Soul Level"
0x9F2565: push    offset aScurrentsoul; "sCurrentSoul"
0x9F256A: mov     ecx, 0B38BE0h; self
0x9F256F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2574: push    offset sub_A21EE0; void (__cdecl *)()
0x9F2579: call    _atexit
0x9F257E: pop     ecx
0x9F257F: retn

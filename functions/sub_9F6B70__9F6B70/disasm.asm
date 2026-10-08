0x9F6B70: push    offset aBeard; "Beard"
0x9F6B75: push    offset aSbeard; "sBeard"
0x9F6B7A: mov     ecx, offset stru_B39050; self
0x9F6B7F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6B84: push    offset sub_A227C0; void (__cdecl *)()
0x9F6B89: call    _atexit
0x9F6B8E: pop     ecx
0x9F6B8F: retn

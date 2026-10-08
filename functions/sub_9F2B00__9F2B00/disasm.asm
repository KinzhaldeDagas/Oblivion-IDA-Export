0x9F2B00: push    offset aMedium; "Medium"
0x9F2B05: push    offset aSmedium; "sMedium"
0x9F2B0A: mov     ecx, offset stru_B38D48; self
0x9F2B0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2B14: push    offset sub_A221B0; void (__cdecl *)()
0x9F2B19: call    _atexit
0x9F2B1E: pop     ecx
0x9F2B1F: retn

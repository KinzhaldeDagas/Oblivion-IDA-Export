0x9FCF20: push    offset aBloom; "Bloom"
0x9FCF25: push    offset aSbloom; "sBloom"
0x9FCF2A: mov     ecx, (offset dword_B3B744+2Ch); self
0x9FCF2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FCF34: push    offset sub_A252B0; void (__cdecl *)()
0x9FCF39: call    _atexit
0x9FCF3E: pop     ecx
0x9FCF3F: retn

0x9FCF00: push    offset off_A6DFC0; defaultValue
0x9FCF05: push    offset aShdr; "sHDR"
0x9FCF0A: mov     ecx, (offset dword_B3B744+24h); self
0x9FCF0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FCF14: push    offset sub_A252A0; void (__cdecl *)()
0x9FCF19: call    _atexit
0x9FCF1E: pop     ecx
0x9FCF1F: retn

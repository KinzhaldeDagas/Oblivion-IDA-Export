0x9F7110: push    offset aNoseBridgeShal; "Nose bridge shallow/deep"
0x9F7115: push    offset aSnosebridgesha; "sNosebridgeshallow"
0x9F711A: mov     ecx, offset stru_B391B8; self
0x9F711F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7124: push    offset sub_A22A90; void (__cdecl *)()
0x9F7129: call    _atexit
0x9F712E: pop     ecx
0x9F712F: retn

0x9F1400: push    offset aTheSaveDeviceY; "The save device you selected is no long"...
0x9F1405: push    offset aSdeviceremoved; "sDeviceRemoved"
0x9F140A: mov     ecx, offset stru_B387E8; self
0x9F140F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1414: push    offset sub_A216F0; void (__cdecl *)()
0x9F1419: call    _atexit
0x9F141E: pop     ecx
0x9F141F: retn

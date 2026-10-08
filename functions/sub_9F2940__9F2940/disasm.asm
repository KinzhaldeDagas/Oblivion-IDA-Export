0x9F2940: push    offset aDownloads; "Downloads"
0x9F2945: push    offset aSdownloads; "sDownloads"
0x9F294A: mov     ecx, offset stru_B38CD8; self
0x9F294F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2954: push    offset sub_A220D0; void (__cdecl *)()
0x9F2959: call    _atexit
0x9F295E: pop     ecx
0x9F295F: retn

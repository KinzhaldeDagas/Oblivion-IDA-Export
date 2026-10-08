0x9DA850: push    offset aHard; "Hard"
0x9DA855: push    offset aSlocklevelna_2; "sLockLevelNameHard"
0x9DA85A: mov     ecx, 0B338A0h; self
0x9DA85F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA864: push    offset sub_A17960; void (__cdecl *)()
0x9DA869: call    _atexit
0x9DA86E: pop     ecx
0x9DA86F: retn

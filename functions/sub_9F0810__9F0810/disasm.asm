0x9F0810: push    offset aBooksRead; "Books Read: "
0x9F0815: push    offset aSmiscnumbooksr; "sMiscNumBooksRead"
0x9F081A: mov     ecx, offset stru_B384F0; self
0x9F081F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0824: push    offset sub_A21100; void (__cdecl *)()
0x9F0829: call    _atexit
0x9F082E: pop     ecx
0x9F082F: retn

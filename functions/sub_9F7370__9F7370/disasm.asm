0x9F7370: push    offset aBeardFlushedPa; "Beard flushed/pale"
0x9F7375: push    offset aSbeardflushed; "sBeardflushed"
0x9F737A: mov     ecx, offset stru_B39250; self
0x9F737F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7384: push    offset sub_A22BC0; void (__cdecl *)()
0x9F7389: call    _atexit
0x9F738E: pop     ecx
0x9F738F: retn

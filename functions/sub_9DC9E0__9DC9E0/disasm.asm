0x9DC9E0: push    offset aRetry; "Retry"
0x9DC9E5: push    offset aSretrytext; "sRetryText"
0x9DC9EA: mov     ecx, 0B34DBCh; self
0x9DC9EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DC9F4: push    offset sub_A18AA0; void (__cdecl *)()
0x9DC9F9: call    _atexit
0x9DC9FE: pop     ecx
0x9DC9FF: retn

0x9F19E0: push    offset aSelf; "Self"
0x9F19E5: push    offset aSselfrange; "sSelfRange"
0x9F19EA: mov     ecx, 0B38960h; self
0x9F19EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F19F4: push    offset sub_A219E0; void (__cdecl *)()
0x9F19F9: call    _atexit
0x9F19FE: pop     ecx
0x9F19FF: retn

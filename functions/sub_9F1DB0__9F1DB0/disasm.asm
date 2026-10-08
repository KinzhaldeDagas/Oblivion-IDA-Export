0x9F1DB0: push    offset aEffectHasAlrea; "Effect has already been added.  Edit th"...
0x9F1DB5: push    offset aSeffectalready; "sEffectAlreadyAdded"
0x9F1DBA: mov     ecx, offset stru_B389F8; self
0x9F1DBF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1DC4: push    offset sub_A21B10; void (__cdecl *)()
0x9F1DC9: call    _atexit
0x9F1DCE: pop     ecx
0x9F1DCF: retn

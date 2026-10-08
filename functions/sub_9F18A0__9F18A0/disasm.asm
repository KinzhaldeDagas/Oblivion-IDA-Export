0x9F18A0: push    offset aKnownEffects; "Known Effects"
0x9F18A5: push    offset aSknowneffects; "sKnownEffects"
0x9F18AA: mov     ecx, offset stru_B38910; self
0x9F18AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F18B4: push    offset sub_A21940; void (__cdecl *)()
0x9F18B9: call    _atexit
0x9F18BE: pop     ecx
0x9F18BF: retn

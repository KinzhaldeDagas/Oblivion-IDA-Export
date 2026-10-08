0x9DA0E0: push    offset aYouAreCurrentl; "You are currently Silenced"
0x9DA0E5: push    offset aSmagiccastsile; "sMagicCastSilenced"
0x9DA0EA: mov     ecx, 0B33534h; self
0x9DA0EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA0F4: push    offset sub_A17610; void (__cdecl *)()
0x9DA0F9: call    _atexit
0x9DA0FE: pop     ecx
0x9DA0FF: retn

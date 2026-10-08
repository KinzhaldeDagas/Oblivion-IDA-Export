0x9D9F20: push    offset aDrain; "Drain"
0x9D9F25: push    offset aSmagiceffec_13; "sMagicEffectItemDrain"
0x9D9F2A: mov     ecx, 0B334D0h; self
0x9D9F2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9D9F34: push    offset sub_A17530; void (__cdecl *)()
0x9D9F39: call    _atexit
0x9D9F3E: pop     ecx
0x9D9F3F: retn

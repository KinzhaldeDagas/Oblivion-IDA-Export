0x9D9F60: push    offset aAbsorb; "Absorb"
0x9D9F65: push    offset aSmagiceffec_15; "sMagicEffectItemAbsorb"
0x9D9F6A: mov     ecx, 0B334E0h; self
0x9D9F6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9D9F74: push    offset sub_A17550; void (__cdecl *)()
0x9D9F79: call    _atexit
0x9D9F7E: pop     ecx
0x9D9F7F: retn

0x9D9D60: push    offset aFor; defaultValue
0x9D9D65: push    offset aSmagiceffectit; "sMagicEffectItemFor"
0x9D9D6A: mov     ecx, 0B33460h; self
0x9D9D6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9D9D74: push    offset sub_A17450; void (__cdecl *)()
0x9D9D79: call    _atexit
0x9D9D7E: pop     ecx
0x9D9D7F: retn

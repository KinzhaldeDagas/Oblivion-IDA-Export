0x9D9E00: push    offset aPt_0; "pt"
0x9D9E05: push    offset aSmagiceffect_4; "sMagicEffectItemPointsSingular"
0x9D9E0A: mov     ecx, 0B33488h; self
0x9D9E0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9D9E14: push    offset sub_A174A0; void (__cdecl *)()
0x9D9E19: call    _atexit
0x9D9E1E: pop     ecx
0x9D9E1F: retn

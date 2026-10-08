0x9D9EE0: push    offset aFortify; "Fortify"
0x9D9EE5: push    offset aSmagiceffec_11; "sMagicEffectItemFortify"
0x9D9EEA: mov     ecx, 0B334C0h; self
0x9D9EEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9D9EF4: push    offset sub_A17510; void (__cdecl *)()
0x9D9EF9: call    _atexit
0x9D9EFE: pop     ecx
0x9D9EFF: retn

0x9D9F40: push    offset aDamage; "Damage"
0x9D9F45: push    offset aSmagiceffec_14; "sMagicEffectItemDamage"
0x9D9F4A: mov     ecx, 0B334D8h; self
0x9D9F4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9D9F54: push    offset sub_A17540; void (__cdecl *)()
0x9D9F59: call    _atexit
0x9D9F5E: pop     ecx
0x9D9F5F: retn

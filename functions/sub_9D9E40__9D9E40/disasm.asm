0x9D9E40: push    offset aPts; defaultValue
0x9D9E45: push    offset aSmagiceffect_6; "sMagicEffectItemPointsPlural"
0x9D9E4A: mov     ecx, 0B33498h; self
0x9D9E4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9D9E54: push    offset sub_A174C0; void (__cdecl *)()
0x9D9E59: call    _atexit
0x9D9E5E: pop     ecx
0x9D9E5F: retn

0x9D9DE0: push    offset defaultValue; "%"
0x9D9DE5: push    offset aSmagiceffect_3; "sMagicEffectItemPercent"
0x9D9DEA: mov     ecx, 0B33480h; self
0x9D9DEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9D9DF4: push    offset sub_A17490; void (__cdecl *)()
0x9D9DF9: call    _atexit
0x9D9DFE: pop     ecx
0x9D9DFF: retn

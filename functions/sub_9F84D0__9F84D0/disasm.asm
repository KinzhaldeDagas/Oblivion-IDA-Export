0x9F84D0: push    offset aSpellEffective; "Spell effectiveness"
0x9F84D5: push    offset aSspelleffectiv; "sSpellEffectiveness"
0x9F84DA: mov     ecx, offset stru_B39518; self
0x9F84DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F84E4: push    offset sub_A23150; void (__cdecl *)()
0x9F84E9: call    _atexit
0x9F84EE: pop     ecx
0x9F84EF: retn

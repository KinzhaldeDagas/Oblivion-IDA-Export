0x9D9DA0: push    offset aIn; "in"
0x9D9DA5: push    offset aSmagiceffect_1; "sMagicEffectItemIn"
0x9D9DAA: mov     ecx, 0B33470h; self
0x9D9DAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9D9DB4: push    offset sub_A17470; void (__cdecl *)()
0x9D9DB9: call    _atexit
0x9D9DBE: pop     ecx
0x9D9DBF: retn

0x9F18C0: push    offset aAddedEffects; "Added Effects"
0x9F18C5: push    offset aSaddedeffects; "sAddedEffects"
0x9F18CA: mov     ecx, offset stru_B38918; self
0x9F18CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F18D4: push    offset sub_A21950; void (__cdecl *)()
0x9F18D9: call    _atexit
0x9F18DE: pop     ecx
0x9F18DF: retn

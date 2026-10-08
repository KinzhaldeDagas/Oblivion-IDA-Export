0x9F2D60: push    offset aIngredientHadN; " Ingredient had no effect."
0x9F2D65: push    offset aSingredientfai; "sIngredientFail"
0x9F2D6A: mov     ecx, 0B38DE0h; self
0x9F2D6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2D74: push    offset sub_A222E0; void (__cdecl *)()
0x9F2D79: call    _atexit
0x9F2D7E: pop     ecx
0x9F2D7F: retn

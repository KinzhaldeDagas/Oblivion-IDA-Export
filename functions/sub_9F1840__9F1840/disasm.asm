0x9F1840: push    offset aAddIngredient; "Add Ingredient"
0x9F1845: push    offset aSaddingredient; "sAddIngredient"
0x9F184A: mov     ecx, offset stru_B388F8; self
0x9F184F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1854: push    offset sub_A21910; void (__cdecl *)()
0x9F1859: call    _atexit
0x9F185E: pop     ecx
0x9F185F: retn

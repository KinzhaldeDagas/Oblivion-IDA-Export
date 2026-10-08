0x9F0850: push    offset aIngredientsEat; "Ingredients Eaten: "
0x9F0855: push    offset aSmiscingredien; "sMiscIngredientsEaten"
0x9F085A: mov     ecx, offset stru_B38500; self
0x9F085F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0864: push    offset sub_A21120; void (__cdecl *)()
0x9F0869: call    _atexit
0x9F086E: pop     ecx
0x9F086F: retn

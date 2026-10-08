0x9F2720: push    offset aExitTheGame?; "Exit the game?"
0x9F2725: push    offset aSexitgamequest; "sExitGameQuestion"
0x9F272A: mov     ecx, offset stru_B38C50; self
0x9F272F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2734: push    offset sub_A21FC0; void (__cdecl *)()
0x9F2739: call    _atexit
0x9F273E: pop     ecx
0x9F273F: retn

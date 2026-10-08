0x9EDEA0: push    230E6h; Initializes Oblivion iClassCharactergenClass to FormID 0x000230E6. While the player still uses this placeholder class, class-major and specialization auto-stat bonuses are suppressed.
0x9EDEA5: push    offset aIclasscharacte; "iClassCharactergenClass"
0x9EDEAA: mov     ecx, offset g_iClassCharactergenClass; self
0x9EDEAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDEB4: push    offset sub_A20120; void (__cdecl *)()
0x9EDEB9: call    _atexit
0x9EDEBE: pop     ecx
0x9EDEBF: retn

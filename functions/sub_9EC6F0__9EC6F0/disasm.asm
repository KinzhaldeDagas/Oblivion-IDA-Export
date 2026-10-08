0x9EC6F0: push    1Eh; defaultValue
0x9EC6F2: push    offset aIdeathdropweap; "iDeathDropWeaponChance"
0x9EC6F7: mov     ecx, 0B378B0h; self
0x9EC6FC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EC701: push    offset sub_A1F880; void (__cdecl *)()
0x9EC706: call    _atexit
0x9EC70B: pop     ecx
0x9EC70C: retn

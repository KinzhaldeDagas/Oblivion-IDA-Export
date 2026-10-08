0x9EAAE0: push    32h ; '2'; defaultValue
0x9EAAE2: push    offset aIarmorbaseskil; "iArmorBaseSkill"
0x9EAAE7: mov     ecx, 0B373A0h; self
0x9EAAEC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EAAF1: push    offset sub_A1EE60; void (__cdecl *)()
0x9EAAF6: call    _atexit
0x9EAAFB: pop     ecx
0x9EAAFC: retn

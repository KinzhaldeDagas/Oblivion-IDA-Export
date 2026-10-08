0x9F96A0: push    offset aWillpower; "Willpower"
0x9F96A5: push    offset aSattributena_1; "sAttributeNameWillpower"
0x9F96AA: mov     ecx, offset stru_B3A044; self
0x9F96AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F96B4: push    offset sub_A238C0; void (__cdecl *)()
0x9F96B9: call    _atexit
0x9F96BE: pop     ecx
0x9F96BF: retn

0x9F7090: push    offset aMouthProtrudin; "Mouth protruding/retracted"
0x9F7095: push    offset aSmouthprotrudi; "sMouthprotruding"
0x9F709A: mov     ecx, offset stru_B39198; self
0x9F709F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F70A4: push    offset sub_A22A50; void (__cdecl *)()
0x9F70A9: call    _atexit
0x9F70AE: pop     ecx
0x9F70AF: retn

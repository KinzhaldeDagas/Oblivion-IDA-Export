0x9F9720: push    offset aPersonality; "Personality"
0x9F9725: push    offset aSattributena_5; "sAttributeNamePersonality"
0x9F972A: mov     ecx, 0B3A064h; self
0x9F972F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9734: push    offset sub_A23900; void (__cdecl *)()
0x9F9739: call    _atexit
0x9F973E: pop     ecx
0x9F973F: retn

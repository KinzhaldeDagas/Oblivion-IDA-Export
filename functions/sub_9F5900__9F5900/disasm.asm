0x9F5900: push    offset aPush; "push"
0x9F5905: push    offset aSpccontrolstex; "sPCControlsTextPrefix"
0x9F590A: mov     ecx, offset stru_B38F18; self
0x9F590F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F5914: push    offset sub_A22550; void (__cdecl *)()
0x9F5919: call    _atexit
0x9F591E: pop     ecx
0x9F591F: retn

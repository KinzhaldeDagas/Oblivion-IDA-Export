0x9DA6A0: push    4; defaultValue
0x9DA6A2: push    offset aIwortcraftma_2; "iWortcraftMaxEffectsExpert"
0x9DA6A7: mov     ecx, 0B336E4h; self
0x9DA6AC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA6B1: push    offset sub_A178B0; void (__cdecl *)()
0x9DA6B6: call    _atexit
0x9DA6BB: pop     ecx
0x9DA6BC: retn

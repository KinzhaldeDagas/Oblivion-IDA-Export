0x9DA6C0: push    5; defaultValue
0x9DA6C2: push    offset aIwortcraftma_3; "iWortcraftMaxEffectsMaster"
0x9DA6C7: mov     ecx, 0B336ECh; self
0x9DA6CC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA6D1: push    offset sub_A178C0; void (__cdecl *)()
0x9DA6D6: call    _atexit
0x9DA6DB: pop     ecx
0x9DA6DC: retn

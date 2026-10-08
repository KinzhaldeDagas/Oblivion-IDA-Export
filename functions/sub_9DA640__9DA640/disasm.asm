0x9DA640: push    1; defaultValue
0x9DA642: push    offset aIwortcraftmaxe; "iWortcraftMaxEffectsNovice"
0x9DA647: mov     ecx, 0B336CCh; self
0x9DA64C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA651: push    offset sub_A17880; void (__cdecl *)()
0x9DA656: call    _atexit
0x9DA65B: pop     ecx
0x9DA65C: retn

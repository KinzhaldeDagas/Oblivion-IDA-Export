0x9DA680: push    3; defaultValue
0x9DA682: push    offset aIwortcraftma_1; "iWortcraftMaxEffectsJourneyman"
0x9DA687: mov     ecx, 0B336DCh; self
0x9DA68C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA691: push    offset sub_A178A0; void (__cdecl *)()
0x9DA696: call    _atexit
0x9DA69B: pop     ecx
0x9DA69C: retn

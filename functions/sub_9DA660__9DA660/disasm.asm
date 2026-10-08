0x9DA660: push    2; defaultValue
0x9DA662: push    offset aIwortcraftma_0; "iWortcraftMaxEffectsApprentice"
0x9DA667: mov     ecx, 0B336D4h; self
0x9DA66C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA671: push    offset sub_A17890; void (__cdecl *)()
0x9DA676: call    _atexit
0x9DA67B: pop     ecx
0x9DA67C: retn

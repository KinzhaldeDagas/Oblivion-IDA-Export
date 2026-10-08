0x9D9F00: push    offset aRestore_0; "Restore"
0x9D9F05: push    offset aSmagiceffec_12; "sMagicEffectItemRestore"
0x9D9F0A: mov     ecx, 0B334C8h; self
0x9D9F0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9D9F14: push    offset sub_A17520; void (__cdecl *)()
0x9D9F19: call    _atexit
0x9D9F1E: pop     ecx
0x9D9F1F: retn

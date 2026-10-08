0x9F1B60: push    offset aYouNeedToAddAt; "You need to add at least one effect in "...
0x9F1B65: push    offset aSnofx; "sNoFX"
0x9F1B6A: mov     ecx, 0B389C0h; self
0x9F1B6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1B74: push    offset sub_A21AA0; void (__cdecl *)()
0x9F1B79: call    _atexit
0x9F1B7E: pop     ecx
0x9F1B7F: retn

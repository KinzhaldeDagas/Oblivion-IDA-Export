0x9F1B80: push    offset aYouHaveExceede; "You have exceeded the maximum enchantme"...
0x9F1B85: push    offset aSlowsoul; "sLowSoul"
0x9F1B8A: mov     ecx, 0B389C8h; self
0x9F1B8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1B94: push    offset sub_A21AB0; void (__cdecl *)()
0x9F1B99: call    _atexit
0x9F1B9E: pop     ecx
0x9F1B9F: retn

0x9F2520: push    offset aUnknownEffect; "(Unknown Effect)"
0x9F2525: push    offset aSmiscunknownef; "sMiscUnknownEffect"
0x9F252A: mov     ecx, 0B38BD0h; self
0x9F252F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2534: push    offset sub_A21EC0; void (__cdecl *)()
0x9F2539: call    _atexit
0x9F253E: pop     ecx
0x9F253F: retn

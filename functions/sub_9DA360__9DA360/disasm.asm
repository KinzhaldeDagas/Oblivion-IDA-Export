0x9DA360: push    offset aScroll; "Scroll"
0x9DA365: push    offset aSmagiccastonce; "sMagicCastOnce"
0x9DA36A: mov     ecx, 0B33634h; self
0x9DA36F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA374: push    offset sub_A17750; void (__cdecl *)()
0x9DA379: call    _atexit
0x9DA37E: pop     ecx
0x9DA37F: retn

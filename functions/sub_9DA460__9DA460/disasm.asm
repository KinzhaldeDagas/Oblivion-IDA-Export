0x9DA460: push    offset aBolt; "Bolt"
0x9DA465: push    offset aSmagicprojec_0; "sMagicProjectileTypeBolt"
0x9DA46A: mov     ecx, 0B33674h; self
0x9DA46F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA474: push    offset sub_A177D0; void (__cdecl *)()
0x9DA479: call    _atexit
0x9DA47E: pop     ecx
0x9DA47F: retn

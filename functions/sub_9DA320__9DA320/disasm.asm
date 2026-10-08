0x9DA320: push    offset aPotion; "Potion"
0x9DA325: push    offset aSmagictypepoti; "sMagicTypePotion"
0x9DA32A: mov     ecx, 0B33624h; self
0x9DA32F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA334: push    offset sub_A17730; void (__cdecl *)()
0x9DA339: call    _atexit
0x9DA33E: pop     ecx
0x9DA33F: retn

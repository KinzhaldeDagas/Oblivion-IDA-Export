0x9DA280: push    offset aDisease; "Disease"
0x9DA285: push    offset aSmagictypedise; "sMagicTypeDisease"
0x9DA28A: mov     ecx, 0B335FCh; self
0x9DA28F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA294: push    offset sub_A176E0; void (__cdecl *)()
0x9DA299: call    _atexit
0x9DA29E: pop     ecx
0x9DA29F: retn

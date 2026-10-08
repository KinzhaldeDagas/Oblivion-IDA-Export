0x9EC640: push    32h ; '2'; defaultValue
0x9EC642: push    offset aIpersuasionout; "iPersuasionOuter"
0x9EC647: mov     ecx, 0B37888h; self
0x9EC64C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EC651: push    offset sub_A1F830; void (__cdecl *)()
0x9EC656: call    _atexit
0x9EC65B: pop     ecx
0x9EC65C: retn

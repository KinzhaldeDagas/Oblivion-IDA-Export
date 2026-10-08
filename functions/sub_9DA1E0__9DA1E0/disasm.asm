0x9DA1E0: push    offset aIllusion; "Illusion"
0x9DA1E5: push    offset aSmagicschoolil; "sMagicSchoolIllusion"
0x9DA1EA: mov     ecx, 0B335D4h; self
0x9DA1EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA1F4: push    offset sub_A17690; void (__cdecl *)()
0x9DA1F9: call    _atexit
0x9DA1FE: pop     ecx
0x9DA1FF: retn

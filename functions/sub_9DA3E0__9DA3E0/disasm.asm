0x9DA3E0: push    offset aSelf; "Self"
0x9DA3E5: push    offset aSmagicrangesel; "sMagicRangeSelf"
0x9DA3EA: mov     ecx, 0B33654h; self
0x9DA3EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA3F4: push    offset sub_A17790; void (__cdecl *)()
0x9DA3F9: call    _atexit
0x9DA3FE: pop     ecx
0x9DA3FF: retn

0x9F29E0: push    offset aNo_1; "No"
0x9F29E5: push    offset name; name
0x9F29EA: mov     ecx, 0B38D00h; self
0x9F29EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F29F4: push    offset sub_A22120; void (__cdecl *)()
0x9F29F9: call    _atexit
0x9F29FE: pop     ecx
0x9F29FF: retn

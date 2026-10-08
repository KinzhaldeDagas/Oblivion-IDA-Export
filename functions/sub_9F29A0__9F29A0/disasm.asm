0x9F29A0: push    offset aOk_0; "Ok"
0x9F29A5: push    offset aSok; name
0x9F29AA: mov     ecx, 0B38CF0h; self
0x9F29AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F29B4: push    offset sub_A22100; void (__cdecl *)()
0x9F29B9: call    _atexit
0x9F29BE: pop     ecx
0x9F29BF: retn

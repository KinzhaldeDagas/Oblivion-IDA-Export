0x9F15E0: push    offset aYouHaveRunOutO; "You have run out of hammers."
0x9F15E5: push    offset aSnohammer; "sNoHammer"
0x9F15EA: mov     ecx, offset stru_B38860; self
0x9F15EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F15F4: push    offset sub_A217E0; void (__cdecl *)()
0x9F15F9: call    _atexit
0x9F15FE: pop     ecx
0x9F15FF: retn

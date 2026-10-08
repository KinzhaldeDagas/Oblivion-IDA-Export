0x9DA3A0: push    offset aStaff; "Staff"
0x9DA3A5: push    offset aSmagiccastwh_0; "sMagicCastWhenUsed"
0x9DA3AA: mov     ecx, 0B33644h; self
0x9DA3AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA3B4: push    offset sub_A17770; void (__cdecl *)()
0x9DA3B9: call    _atexit
0x9DA3BE: pop     ecx
0x9DA3BF: retn

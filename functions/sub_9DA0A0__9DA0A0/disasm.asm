0x9DA0A0: push    offset aYouDonTHaveEno; "You don't have enough Magicka"
0x9DA0A5: push    offset aSmagiccastinsu; "sMagicCastInsufficientMagicka"
0x9DA0AA: mov     ecx, 0B33524h; self
0x9DA0AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA0B4: push    offset sub_A175F0; void (__cdecl *)()
0x9DA0B9: call    _atexit
0x9DA0BE: pop     ecx
0x9DA0BF: retn

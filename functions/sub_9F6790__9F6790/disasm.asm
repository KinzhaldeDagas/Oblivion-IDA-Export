0x9F6790: push    offset aSpell_0; "spell"
0x9F6795: push    offset aSspell; "sSpell"
0x9F679A: mov     ecx, offset stru_B38F58; self
0x9F679F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F67A4: push    offset sub_A225D0; void (__cdecl *)()
0x9F67A9: call    _atexit
0x9F67AE: pop     ecx
0x9F67AF: retn

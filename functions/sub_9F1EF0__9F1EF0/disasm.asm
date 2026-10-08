0x9F1EF0: push    offset aYouAreOverEncu; "You are over-encumbered."
0x9F1EF5: push    offset aSoverencumbere; "sOverEncumbered"
0x9F1EFA: mov     ecx, offset stru_B38A48; self
0x9F1EFF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1F04: push    offset sub_A21BB0; void (__cdecl *)()
0x9F1F09: call    _atexit
0x9F1F0E: pop     ecx
0x9F1F0F: retn

0x9F7290: push    offset aNoseShortLong; "Nose short/long"
0x9F7295: push    offset aSnoseshort; "sNoseshort"
0x9F729A: mov     ecx, offset stru_B39218; self
0x9F729F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F72A4: push    offset sub_A22B50; void (__cdecl *)()
0x9F72A9: call    _atexit
0x9F72AE: pop     ecx
0x9F72AF: retn

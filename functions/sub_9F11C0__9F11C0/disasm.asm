0x9F11C0: push    offset aAreYouSureYo_2; "Are you sure you want to overwrite this"...
0x9F11C5: push    offset aSsaveoversaveg; "sSaveOverSaveGame"
0x9F11CA: mov     ecx, offset stru_B38758; self
0x9F11CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F11D4: push    offset sub_A215D0; void (__cdecl *)()
0x9F11D9: call    _atexit
0x9F11DE: pop     ecx
0x9F11DF: retn

0x9DA2E0: push    offset aPoison; "Poison"
0x9DA2E5: push    offset aSmagictypepois; "sMagicTypePoison"
0x9DA2EA: mov     ecx, 0B33614h; self
0x9DA2EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA2F4: push    offset sub_A17710; void (__cdecl *)()
0x9DA2F9: call    _atexit
0x9DA2FE: pop     ecx
0x9DA2FF: retn

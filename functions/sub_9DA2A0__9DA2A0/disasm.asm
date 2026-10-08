0x9DA2A0: push    offset aLesserPower; "Lesser Power"
0x9DA2A5: push    offset aSmagictypeless; "sMagicTypeLesserPower"
0x9DA2AA: mov     ecx, 0B33604h; self
0x9DA2AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA2B4: push    offset sub_A176F0; void (__cdecl *)()
0x9DA2B9: call    _atexit
0x9DA2BE: pop     ecx
0x9DA2BF: retn

0x9F23D0: push    offset aBald; "Bald"
0x9F23D5: push    offset aSbald; "sBald"
0x9F23DA: mov     ecx, offset stru_B38B80; self
0x9F23DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F23E4: push    offset sub_A21E20; void (__cdecl *)()
0x9F23E9: call    _atexit
0x9F23EE: pop     ecx
0x9F23EF: retn

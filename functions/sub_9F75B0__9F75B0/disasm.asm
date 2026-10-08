0x9F75B0: push    offset aEyebrowsLowerL; "Eyebrows lower light/dark"
0x9F75B5: push    offset aSeyebrowslower; "sEyebrowslower"
0x9F75BA: mov     ecx, offset stru_B392E0; self
0x9F75BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F75C4: push    offset sub_A22CE0; void (__cdecl *)()
0x9F75C9: call    _atexit
0x9F75CE: pop     ecx
0x9F75CF: retn

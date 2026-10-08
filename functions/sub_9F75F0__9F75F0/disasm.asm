0x9F75F0: push    offset aEyebrowsUpperD; "Eyebrows upper dark/light"
0x9F75F5: push    offset aSeyebrowsupper; "sEyebrowsuppert"
0x9F75FA: mov     ecx, offset stru_B392F0; self
0x9F75FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7604: push    offset sub_A22D00; void (__cdecl *)()
0x9F7609: call    _atexit
0x9F760E: pop     ecx
0x9F760F: retn

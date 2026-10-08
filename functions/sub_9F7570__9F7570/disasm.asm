0x9F7570: push    offset aEyebrowsThickT; "Eyebrows thick/thin"
0x9F7575: push    offset aSeyebrowsthick; "sEyebrowsthick"
0x9F757A: mov     ecx, offset stru_B392D0; self
0x9F757F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7584: push    offset sub_A22CC0; void (__cdecl *)()
0x9F7589: call    _atexit
0x9F758E: pop     ecx
0x9F758F: retn

0x9F6C10: push    offset aFaceForeheadSe; "Face forehead/sellion/nose ratio"
0x9F6C15: push    offset aSfaceforehead; "sFaceforehead"
0x9F6C1A: mov     ecx, offset stru_B39078; self
0x9F6C1F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6C24: push    offset sub_A22810; void (__cdecl *)()
0x9F6C29: call    _atexit
0x9F6C2E: pop     ecx
0x9F6C2F: retn

0x9F6F10: push    offset aForeheadTallSh; "Forehead tall/short"
0x9F6F15: push    offset aSforeheadtall; "sForeheadtall"
0x9F6F1A: mov     ecx, offset stru_B39138; self
0x9F6F1F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6F24: push    offset sub_A22990; void (__cdecl *)()
0x9F6F29: call    _atexit
0x9F6F2E: pop     ecx
0x9F6F2F: retn

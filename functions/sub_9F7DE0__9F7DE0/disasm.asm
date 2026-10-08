0x9F7DE0: push    offset aMapMarkerAdded; "Map marker added."
0x9F7DE5: push    offset aSmapmarkeradde; "sMapMarkerAdded"
0x9F7DEA: mov     ecx, offset stru_B394E0; self
0x9F7DEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7DF4: push    offset sub_A230E0; void (__cdecl *)()
0x9F7DF9: call    _atexit
0x9F7DFE: pop     ecx
0x9F7DFF: retn

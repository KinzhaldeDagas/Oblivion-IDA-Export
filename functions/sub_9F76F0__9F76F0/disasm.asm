0x9F76F0: push    offset aHairColor; "Hair Color"
0x9F76F5: push    offset aScolor; "sColor"
0x9F76FA: mov     ecx, offset stru_B39330; self
0x9F76FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7704: push    offset sub_A22D80; void (__cdecl *)()
0x9F7709: call    _atexit
0x9F770E: pop     ecx
0x9F770F: retn

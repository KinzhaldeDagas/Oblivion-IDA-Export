0x9F0630: push    offset aPlacesDiscover; "Places Discovered: "
0x9F0635: push    offset aSmiscnumplaces; "sMiscNumPlacesDiscovered"
0x9F063A: mov     ecx, 0B38478h; self
0x9F063F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0644: push    offset sub_A21010; void (__cdecl *)()
0x9F0649: call    _atexit
0x9F064E: pop     ecx
0x9F064F: retn

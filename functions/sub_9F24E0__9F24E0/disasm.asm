0x9F24E0: push    offset aCharge; "Charge"
0x9F24E5: push    offset aSmisccharge; "sMiscCharge"
0x9F24EA: mov     ecx, 0B38BC0h; self
0x9F24EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F24F4: push    offset sub_A21EA0; void (__cdecl *)()
0x9F24F9: call    _atexit
0x9F24FE: pop     ecx
0x9F24FF: retn

0x9F7390: push    offset aBeardLightDark; "Beard light/dark"
0x9F7395: push    offset aSbeardlight; "sBeardlight"
0x9F739A: mov     ecx, offset stru_B39258; self
0x9F739F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F73A4: push    offset sub_A22BD0; void (__cdecl *)()
0x9F73A9: call    _atexit
0x9F73AE: pop     ecx
0x9F73AF: retn

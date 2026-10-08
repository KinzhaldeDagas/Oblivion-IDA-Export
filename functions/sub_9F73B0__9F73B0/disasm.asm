0x9F73B0: push    offset aBeardCheeksLig; "Beard cheeks light/dark"
0x9F73B5: push    offset aSbeardcheeks; "sBeardcheeks"
0x9F73BA: mov     ecx, offset stru_B39260; self
0x9F73BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F73C4: push    offset sub_A22BE0; void (__cdecl *)()
0x9F73C9: call    _atexit
0x9F73CE: pop     ecx
0x9F73CF: retn

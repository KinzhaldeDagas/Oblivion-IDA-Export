0x9F70D0: push    offset aMouthUnderbite; "Mouth underbite/overbite"
0x9F70D5: push    offset aSmouthunderbit; "sMouthunderbite"
0x9F70DA: mov     ecx, offset stru_B391A8; self
0x9F70DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F70E4: push    offset sub_A22A70; void (__cdecl *)()
0x9F70E9: call    _atexit
0x9F70EE: pop     ecx
0x9F70EF: retn

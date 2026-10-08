0x9F7DA0: push    offset aPause; "Pause"
0x9F7DA5: push    offset aSpausetext; "sPauseText"
0x9F7DAA: mov     ecx, offset stru_B394D0; self
0x9F7DAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7DB4: push    offset sub_A230C0; void (__cdecl *)()
0x9F7DB9: call    _atexit
0x9F7DBE: pop     ecx
0x9F7DBF: retn

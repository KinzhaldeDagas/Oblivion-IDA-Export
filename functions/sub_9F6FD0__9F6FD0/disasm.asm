0x9F6FD0: push    offset aMouthDrawnPurs; "Mouth drawn/pursed"
0x9F6FD5: push    offset aSmouthdrawn; "sMouthdrawn"
0x9F6FDA: mov     ecx, offset stru_B39168; self
0x9F6FDF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6FE4: push    offset sub_A229F0; void (__cdecl *)()
0x9F6FE9: call    _atexit
0x9F6FEE: pop     ecx
0x9F6FEF: retn

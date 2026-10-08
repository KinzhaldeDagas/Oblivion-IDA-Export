0x9FA4D0: push    offset aSteal; "Steal"
0x9FA4D5: push    offset aScrimetypestea; "sCrimeTypeSteal"
0x9FA4DA: mov     ecx, 0B3A3D0h; self
0x9FA4DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA4E4: push    offset sub_A23FD0; void (__cdecl *)()
0x9FA4E9: call    _atexit
0x9FA4EE: pop     ecx
0x9FA4EF: retn

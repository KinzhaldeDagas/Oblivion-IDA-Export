0x9FA4F0: push    offset aPickpocket; "Pickpocket"
0x9FA4F5: push    offset aScrimetypepick; "sCrimeTypePickpocket"
0x9FA4FA: mov     ecx, offset stru_B3A3D8; self
0x9FA4FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA504: push    offset sub_A23FE0; void (__cdecl *)()
0x9FA509: call    _atexit
0x9FA50E: pop     ecx
0x9FA50F: retn

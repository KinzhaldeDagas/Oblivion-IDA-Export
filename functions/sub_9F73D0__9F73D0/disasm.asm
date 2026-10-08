0x9F73D0: push    offset aBeardCircleLig; "Beard circle light/dark"
0x9F73D5: push    offset aSbeardcircle; "sBeardcircle"
0x9F73DA: mov     ecx, offset stru_B39268; self
0x9F73DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F73E4: push    offset sub_A22BF0; void (__cdecl *)()
0x9F73E9: call    _atexit
0x9F73EE: pop     ecx
0x9F73EF: retn

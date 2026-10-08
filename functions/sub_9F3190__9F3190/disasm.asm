0x9F3190: push    offset aLook; "Look"
0x9F3195: push    offset aSlook; "sLook"
0x9F319A: mov     ecx, offset stru_B38EB8; self
0x9F319F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F31A4: push    offset sub_A22490; void (__cdecl *)()
0x9F31A9: call    _atexit
0x9F31AE: pop     ecx
0x9F31AF: retn

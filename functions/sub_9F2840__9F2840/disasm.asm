0x9F2840: push    offset aReturnToTheMai; "Return to the main menu?"
0x9F2845: push    offset aSreturntomainm; "sReturnToMainMenu"
0x9F284A: mov     ecx, offset stru_B38C98; self
0x9F284F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2854: push    offset sub_A22050; void (__cdecl *)()
0x9F2859: call    _atexit
0x9F285E: pop     ecx
0x9F285F: retn

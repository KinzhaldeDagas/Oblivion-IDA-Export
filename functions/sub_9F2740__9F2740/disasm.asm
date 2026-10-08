0x9F2740: push    offset aExitGame; "Exit Game"
0x9F2745: push    offset aSexitgameaffir; "sExitGameAffirm"
0x9F274A: mov     ecx, offset stru_B38C58; self
0x9F274F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2754: push    offset sub_A21FD0; void (__cdecl *)()
0x9F2759: call    _atexit
0x9F275E: pop     ecx
0x9F275F: retn

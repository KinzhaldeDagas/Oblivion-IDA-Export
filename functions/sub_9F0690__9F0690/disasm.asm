0x9F0690: push    offset aNoviceSkills; "Novice Skills: "
0x9F0695: push    offset aSmiscnoviceski; "sMiscNoviceSkills"
0x9F069A: mov     ecx, 0B38490h; self
0x9F069F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F06A4: push    offset sub_A21040; void (__cdecl *)()
0x9F06A9: call    _atexit
0x9F06AE: pop     ecx
0x9F06AF: retn

0x9F04B0: push    offset aCreaturesKille; "Creatures Killed: "
0x9F04B5: push    offset aSmiscnumkills; "sMiscNumKills"
0x9F04BA: mov     ecx, 0B38418h; self
0x9F04BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F04C4: push    offset sub_A20F50; void (__cdecl *)()
0x9F04C9: call    _atexit
0x9F04CE: pop     ecx
0x9F04CF: retn

0x9F0470: push    offset aShiveringIsles; "Shivering Isles Bounty"
0x9F0475: push    offset aSmiscsebounty; "sMiscSEBounty"
0x9F047A: mov     ecx, 0B38408h; self
0x9F047F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0484: push    offset sub_A20F30; void (__cdecl *)()
0x9F0489: call    _atexit
0x9F048E: pop     ecx
0x9F048F: retn

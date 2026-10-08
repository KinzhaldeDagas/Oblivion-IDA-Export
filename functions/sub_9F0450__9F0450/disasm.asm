0x9F0450: push    offset aBounty; "Bounty:"
0x9F0455: push    offset aSmiscbounty; "sMiscBounty"
0x9F045A: mov     ecx, 0B38400h; self
0x9F045F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0464: push    offset sub_A20F20; void (__cdecl *)()
0x9F0469: call    _atexit
0x9F046E: pop     ecx
0x9F046F: retn

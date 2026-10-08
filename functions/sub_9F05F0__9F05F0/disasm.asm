0x9F05F0: push    offset aLargestBounty; "Largest Bounty: "
0x9F05F5: push    offset aSmisclargestbo; "sMiscLargestBounty"
0x9F05FA: mov     ecx, 0B38468h; self
0x9F05FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0604: push    offset sub_A20FF0; void (__cdecl *)()
0x9F0609: call    _atexit
0x9F060E: pop     ecx
0x9F060F: retn

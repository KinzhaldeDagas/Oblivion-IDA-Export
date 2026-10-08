0x9F9B00: push    offset aBounty_0; "Bounty"
0x9F9B05: push    offset aSvirtuenamebou; "sVirtueNameBounty"
0x9F9B0A: mov     ecx, 0B3A15Ch; self
0x9F9B0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9B14: push    offset sub_A23AF0; void (__cdecl *)()
0x9F9B19: call    _atexit
0x9F9B1E: pop     ecx
0x9F9B1F: retn

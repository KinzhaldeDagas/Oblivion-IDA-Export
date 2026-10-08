0x9F0550: push    offset aDaysJailed; "Days Jailed: "
0x9F0555: push    offset aSmiscdaysjaile; "sMiscDaysJailed"
0x9F055A: mov     ecx, 0B38440h; self
0x9F055F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0564: push    offset sub_A20FA0; void (__cdecl *)()
0x9F0569: call    _atexit
0x9F056E: pop     ecx
0x9F056F: retn

0x9F9740: push    offset aLuck; "Luck"
0x9F9745: push    offset aSattributena_6; "sAttributeNameLuck"
0x9F974A: mov     ecx, 0B3A06Ch; self
0x9F974F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9754: push    offset sub_A23910; void (__cdecl *)()
0x9F9759: call    _atexit
0x9F975E: pop     ecx
0x9F975F: retn

0x9F9C40: push    offset aLuckDescriptio; "Luck Description"
0x9F9C45: push    offset aSattributede_6; "sAttributeDescLuck"
0x9F9C4A: mov     ecx, 0B3A1ACh; self
0x9F9C4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9C54: push    offset sub_A23B90; void (__cdecl *)()
0x9F9C59: call    _atexit
0x9F9C5E: pop     ecx
0x9F9C5F: retn

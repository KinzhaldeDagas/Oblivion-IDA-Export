0x9F1660: push    offset aOnlyAJourneyma; "Only a journeyman armorer or higher may"...
0x9F1665: push    offset aSnorepairmagic; "sNoRepairMagic"
0x9F166A: mov     ecx, offset stru_B38880; self
0x9F166F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1674: push    offset sub_A21820; void (__cdecl *)()
0x9F1679: call    _atexit
0x9F167E: pop     ecx
0x9F167F: retn

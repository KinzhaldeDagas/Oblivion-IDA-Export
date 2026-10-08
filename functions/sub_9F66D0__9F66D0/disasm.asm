0x9F66D0: push    offset aEnterANameForT; "Enter a name for the"
0x9F66D5: push    offset aSentryinstruct; "sEntryInstructions1"
0x9F66DA: mov     ecx, offset stru_B38F28; self
0x9F66DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F66E4: push    offset sub_A22570; void (__cdecl *)()
0x9F66E9: call    _atexit
0x9F66EE: pop     ecx
0x9F66EF: retn

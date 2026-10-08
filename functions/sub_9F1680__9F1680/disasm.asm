0x9F1680: push    offset aYouHaveUsedAWe; "You have used a Welkynd Stone's power t"...
0x9F1685: push    offset aSwelkyndstonem; "sWelkyndStoneMessage"
0x9F168A: mov     ecx, offset stru_B38888; self
0x9F168F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1694: push    offset sub_A21830; void (__cdecl *)()
0x9F1699: call    _atexit
0x9F169E: pop     ecx
0x9F169F: retn

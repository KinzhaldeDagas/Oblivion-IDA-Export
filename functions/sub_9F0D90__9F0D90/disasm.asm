0x9F0D90: push    offset aReplace; "Replace"
0x9F0D95: push    offset aSreplace; "sReplace"
0x9F0D9A: mov     ecx, offset stru_B38650; self
0x9F0D9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0DA4: push    offset sub_A213C0; void (__cdecl *)()
0x9F0DA9: call    _atexit
0x9F0DAE: pop     ecx
0x9F0DAF: retn

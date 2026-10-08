0x9F16A0: push    offset aYouHaveUsedAVa; "You have used a Varla Stone's power to "...
0x9F16A5: push    offset aSvarlastonemes; "sVarlaStoneMessage"
0x9F16AA: mov     ecx, offset stru_B38890; self
0x9F16AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F16B4: push    offset sub_A21840; void (__cdecl *)()
0x9F16B9: call    _atexit
0x9F16BE: pop     ecx
0x9F16BF: retn

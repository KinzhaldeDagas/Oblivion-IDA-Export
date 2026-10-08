0x9E27B0: push    offset aHeavy; "Heavy"
0x9E27B5: push    offset aSarmorweighthe; "sArmorWeightHeavy"
0x9E27BA: mov     ecx, offset stru_B35AE4; self
0x9E27BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E27C4: push    offset sub_A1B6A0; void (__cdecl *)()
0x9E27C9: call    _atexit
0x9E27CE: pop     ecx
0x9E27CF: retn

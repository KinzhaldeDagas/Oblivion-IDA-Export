0x9F1980: push    offset aTargetLevel; "Target Level"
0x9F1985: push    offset aSmagnitudeisle; "sMagnitudeIsLevelText"
0x9F198A: mov     ecx, 0B38948h; self
0x9F198F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1994: push    offset sub_A219B0; void (__cdecl *)()
0x9F1999: call    _atexit
0x9F199E: pop     ecx
0x9F199F: retn

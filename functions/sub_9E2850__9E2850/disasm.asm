0x9E2850: push    14h; defaultValue
0x9E2852: push    offset aIarmorweightbo; "iArmorWeightBoots"
0x9E2857: mov     ecx, offset stru_B35B0C; self
0x9E285C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E2861: push    offset sub_A1B6F0; void (__cdecl *)()
0x9E2866: call    _atexit
0x9E286B: pop     ecx
0x9E286C: retn

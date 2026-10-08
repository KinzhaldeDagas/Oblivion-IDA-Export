0x9E2830: push    5; defaultValue
0x9E2832: push    offset aIarmorweightga; "iArmorWeightGauntlets"
0x9E2837: mov     ecx, offset stru_B35B04; self
0x9E283C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E2841: push    offset sub_A1B6E0; void (__cdecl *)()
0x9E2846: call    _atexit
0x9E284B: pop     ecx
0x9E284C: retn

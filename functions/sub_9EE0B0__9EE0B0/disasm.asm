0x9EE0B0: push    14h; defaultValue
0x9EE0B2: push    offset aIremoveexces_2; "iRemoveExcessDeadComplexTotalActorCount"
0x9EE0B7: mov     ecx, offset stru_B37D68; self
0x9EE0BC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EE0C1: push    offset sub_A201F0; void (__cdecl *)()
0x9EE0C6: call    _atexit
0x9EE0CB: pop     ecx
0x9EE0CC: retn

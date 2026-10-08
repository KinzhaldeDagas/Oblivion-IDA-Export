0x9EE040: push    14h; defaultValue
0x9EE042: push    offset aIremoveexces_0; "iRemoveExcessDeadTotalActorCount"
0x9EE047: mov     ecx, offset stru_B37D50; self
0x9EE04C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EE051: push    offset sub_A201C0; void (__cdecl *)()
0x9EE056: call    _atexit
0x9EE05B: pop     ecx
0x9EE05C: retn

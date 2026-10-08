0x9F2350: push    offset aYouCannotFas_1; Static GameSetting constructor only; not the runtime validation callback.
0x9F2355: push    offset aSnofasttravela; "sNoFastTravelAlarm"
0x9F235A: mov     ecx, offset stru_B38B60; self
0x9F235F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2364: push    offset sub_A21DE0; void (__cdecl *)()
0x9F2369: call    _atexit
0x9F236E: pop     ecx
0x9F236F: retn

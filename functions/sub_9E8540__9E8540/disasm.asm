0x9E8540: push    14h; MEF LARGE PERF 2026-09-08: PERF-7 actual setting proof: GameSetting_ConstrAndReg at9E854C registers iAINumberActorsComplexScene with default20 forB36CD0. Its BSS bytes are not initialized in this IDB (is_loaded=false); get_dword FFFFFFFF is not a default value. Existing shadow-candidate alias reflects consumer use, not the setting's registered name.
0x9E8542: push    offset aIainumberactor; "iAINumberActorsComplexScene"
0x9E8547: mov     ecx, offset g_uMaxShadowActorCandidates; self
0x9E854C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E8551: push    offset sub_A1E0C0; void (__cdecl *)()
0x9E8556: call    _atexit
0x9E855B: pop     ecx
0x9E855C: retn

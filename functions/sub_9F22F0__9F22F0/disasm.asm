0x9F22F0: push    offset aFastTravelIsCu; Static GameSetting constructor only; not the runtime validation callback.
0x9F22F5: push    offset aSnofasttravels; "sNoFastTravelScriptBlock"
0x9F22FA: mov     ecx, offset stru_B38B48; self
0x9F22FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2304: push    offset sub_A21DB0; void (__cdecl *)()
0x9F2309: call    _atexit
0x9F230E: pop     ecx
0x9F230F: retn

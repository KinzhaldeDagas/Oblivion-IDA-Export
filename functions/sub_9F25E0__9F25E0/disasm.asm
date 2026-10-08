0x9F25E0: push    offset aLoadingDistant; "Loading distant LOD..."
0x9F25E5: push    offset aSloadinglod; "sLoadingLOD"
0x9F25EA: mov     ecx, offset stru_B38C00; self
0x9F25EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F25F4: push    offset sub_A21F20; void (__cdecl *)()
0x9F25F9: call    _atexit
0x9F25FE: pop     ecx
0x9F25FF: retn

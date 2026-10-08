0x9F6C70: push    offset aFaceThinWide; "Face thin/wide"
0x9F6C75: push    offset aSfacethin; "sFacethin"
0x9F6C7A: mov     ecx, offset stru_B39090; self
0x9F6C7F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6C84: push    offset sub_A22840; void (__cdecl *)()
0x9F6C89: call    _atexit
0x9F6C8E: pop     ecx
0x9F6C8F: retn

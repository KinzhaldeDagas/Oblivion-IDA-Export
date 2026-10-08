0x9E6CC0: push    0Fh; defaultValue
0x9E6CC2: push    offset aIaifriendlyhit; "iAIFriendlyHitMinDisposition"
0x9E6CC7: mov     ecx, (offset flt_B36778+110h); self
0x9E6CCC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E6CD1: push    offset sub_A1D830; void (__cdecl *)()
0x9E6CD6: call    _atexit
0x9E6CDB: pop     ecx
0x9E6CDC: retn

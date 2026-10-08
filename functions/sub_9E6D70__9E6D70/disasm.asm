0x9E6D70: push    3; defaultValue
0x9E6D72: push    offset aIfriendhitallo; "iFriendHitAllowed"
0x9E6D77: mov     ecx, (offset flt_B36778+130h); self
0x9E6D7C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E6D81: push    offset sub_A1D870; void (__cdecl *)()
0x9E6D86: call    _atexit
0x9E6D8B: pop     ecx
0x9E6D8C: retn

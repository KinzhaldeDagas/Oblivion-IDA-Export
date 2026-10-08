0x9E6EB0: push    5; defaultValue
0x9E6EB2: push    offset aIallyhitallowe; "iAllyHitAllowed"
0x9E6EB7: mov     ecx, (offset flt_B36778+168h); self
0x9E6EBC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E6EC1: push    offset sub_A1D8E0; void (__cdecl *)()
0x9E6EC6: call    _atexit
0x9E6ECB: pop     ecx
0x9E6ECC: retn

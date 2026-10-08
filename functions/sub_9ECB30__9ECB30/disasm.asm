0x9ECB30: push    5; defaultValue
0x9ECB32: push    offset aIpersuasiond_1; "iPersuasionDemandScale"
0x9ECB37: mov     ecx, 0B37970h; self
0x9ECB3C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9ECB41: push    offset sub_A1FA00; void (__cdecl *)()
0x9ECB46: call    _atexit
0x9ECB4B: pop     ecx
0x9ECB4C: retn

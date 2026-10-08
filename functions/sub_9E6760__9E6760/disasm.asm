0x9E6760: push    3E8h; defaultValue
0x9E6765: push    offset aIboneloddistmu; "iBoneLODDistMult"
0x9E676A: mov     ecx, (offset flt_B36778+28h); self
0x9E676F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E6774: push    offset sub_A1D660; void (__cdecl *)()
0x9E6779: call    _atexit
0x9E677E: pop     ecx
0x9E677F: retn

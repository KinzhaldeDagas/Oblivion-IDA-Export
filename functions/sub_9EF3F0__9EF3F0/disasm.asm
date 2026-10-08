0x9EF3F0: push    5; defaultValue
0x9EF3F2: push    offset aImagicmaxpotio; "iMagicMaxPotionsNovice"
0x9EF3F7: mov     ecx, (offset flt_B37ED0+1D8h); self
0x9EF3FC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EF401: push    offset sub_A20870; void (__cdecl *)()
0x9EF406: call    _atexit
0x9EF40B: pop     ecx
0x9EF40C: retn

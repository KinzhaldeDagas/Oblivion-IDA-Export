0x9EF410: push    5; defaultValue
0x9EF412: push    offset aImagicmaxpot_0; "iMagicMaxPotionsApprentice"
0x9EF417: mov     ecx, (offset flt_B37ED0+1E0h); self
0x9EF41C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EF421: push    offset sub_A20880; void (__cdecl *)()
0x9EF426: call    _atexit
0x9EF42B: pop     ecx
0x9EF42C: retn

0x9EF430: push    7; defaultValue
0x9EF432: push    offset aImagicmaxpot_1; "iMagicMaxPotionsJourneyman"
0x9EF437: mov     ecx, (offset flt_B37ED0+1E8h); self
0x9EF43C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EF441: push    offset sub_A20890; void (__cdecl *)()
0x9EF446: call    _atexit
0x9EF44B: pop     ecx
0x9EF44C: retn

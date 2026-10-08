0x9EF470: push    0Ah; defaultValue
0x9EF472: push    offset aImagicmaxpot_3; "iMagicMaxPotionsMaster"
0x9EF477: mov     ecx, (offset flt_B37ED0+1F8h); self
0x9EF47C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EF481: push    offset sub_A208B0; void (__cdecl *)()
0x9EF486: call    _atexit
0x9EF48B: pop     ecx
0x9EF48C: retn

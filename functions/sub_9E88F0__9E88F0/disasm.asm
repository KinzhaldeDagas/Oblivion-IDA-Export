0x9E88F0: push    2; defaultValue
0x9E88F2: push    offset aIaiyieldmaxhit; "iAIYieldMaxHitCount"
0x9E88F7: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+0A0h); self
0x9E88FC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E8901: push    offset sub_A1E210; void (__cdecl *)()
0x9E8906: call    _atexit
0x9E890B: pop     ecx
0x9E890C: retn

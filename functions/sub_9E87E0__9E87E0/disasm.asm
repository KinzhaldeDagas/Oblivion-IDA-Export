0x9E87E0: push    3; defaultValue
0x9E87E2: push    offset aIaifleemaxhitc; "iAIFleeMaxHitCount"
0x9E87E7: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+70h); self
0x9E87EC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E87F1: push    offset sub_A1E1B0; void (__cdecl *)()
0x9E87F6: call    _atexit
0x9E87FB: pop     ecx
0x9E87FC: retn

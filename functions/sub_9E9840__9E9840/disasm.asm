0x9E9840: push    14h; defaultValue
0x9E9842: push    offset aImarksmanfatig; "iMarksmanFatigueBurnPerSecondSkill"
0x9E9847: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+340h); self
0x9E984C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E9851: push    offset sub_A1E750; void (__cdecl *)()
0x9E9856: call    _atexit
0x9E985B: pop     ecx
0x9E985C: retn

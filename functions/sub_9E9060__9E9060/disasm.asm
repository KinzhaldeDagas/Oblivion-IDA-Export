0x9E9060: push    19h; defaultValue
0x9E9062: push    offset aIarmordamagecu; "iArmorDamageCuirassChance"
0x9E9067: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+1E0h); self
0x9E906C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E9071: push    offset sub_A1E490; void (__cdecl *)()
0x9E9076: call    _atexit
0x9E907B: pop     ecx
0x9E907C: retn

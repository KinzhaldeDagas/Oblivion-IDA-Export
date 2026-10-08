0x9E9080: push    0Fh; defaultValue
0x9E9082: push    offset aIarmordamagegr; "iArmorDamageGreavesChance"
0x9E9087: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+1E8h); self
0x9E908C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E9091: push    offset sub_A1E4A0; void (__cdecl *)()
0x9E9096: call    _atexit
0x9E909B: pop     ecx
0x9E909C: retn

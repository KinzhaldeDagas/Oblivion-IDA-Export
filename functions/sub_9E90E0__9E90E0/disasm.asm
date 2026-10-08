0x9E90E0: push    0Ah; defaultValue
0x9E90E2: push    offset aIarmordamagebo; "iArmorDamageBootsChance"
0x9E90E7: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+200h); self
0x9E90EC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E90F1: push    offset sub_A1E4D0; void (__cdecl *)()
0x9E90F6: call    _atexit
0x9E90FB: pop     ecx
0x9E90FC: retn

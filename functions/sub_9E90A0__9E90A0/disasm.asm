0x9E90A0: push    0Ah; defaultValue
0x9E90A2: push    offset aIarmordamagehe; "iArmorDamageHelmChance"
0x9E90A7: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+1F0h); self
0x9E90AC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E90B1: push    offset sub_A1E4B0; void (__cdecl *)()
0x9E90B6: call    _atexit
0x9E90BB: pop     ecx
0x9E90BC: retn

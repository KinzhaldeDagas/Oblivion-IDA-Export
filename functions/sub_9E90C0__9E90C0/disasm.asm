0x9E90C0: push    0Ah; defaultValue
0x9E90C2: push    offset aIarmordamagega; "iArmorDamageGauntletsChance"
0x9E90C7: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+1F8h); self
0x9E90CC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E90D1: push    offset sub_A1E4C0; void (__cdecl *)()
0x9E90D6: call    _atexit
0x9E90DB: pop     ecx
0x9E90DC: retn

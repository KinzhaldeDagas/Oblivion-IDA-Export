0x9E9100: push    1Eh; defaultValue
0x9E9102: push    offset aIarmordamagesh; "iArmorDamageShieldChance"
0x9E9107: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+208h); self
0x9E910C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E9111: push    offset sub_A1E4E0; void (__cdecl *)()
0x9E9116: call    _atexit
0x9E911B: pop     ecx
0x9E911C: retn

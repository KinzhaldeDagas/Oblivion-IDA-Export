0x9F1F10: push    offset aYourHeavyArmor; "Your heavy armor prevents you from jump"...
0x9F1F15: push    offset aSheavyarmornoj; "sHeavyArmorNoJump"
0x9F1F1A: mov     ecx, offset stru_B38A50; self
0x9F1F1F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1F24: push    offset sub_A21BC0; void (__cdecl *)()
0x9F1F29: call    _atexit
0x9F1F2E: pop     ecx
0x9F1F2F: retn

0x9F0BF0: push    offset aStealth_0; "Stealth"
0x9F0BF5: push    offset aSstealthname; "sStealthName"
0x9F0BFA: mov     ecx, offset stru_B385E8; self
0x9F0BFF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0C04: push    offset sub_A212F0; void (__cdecl *)()
0x9F0C09: call    _atexit
0x9F0C0E: pop     ecx
0x9F0C0F: retn

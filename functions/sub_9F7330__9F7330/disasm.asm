0x9F7330: push    offset aSkinTintPurple; "Skin tint purple/yellow"
0x9F7335: push    offset aSskintintpurpl; "sSkintintpurple"
0x9F733A: mov     ecx, offset stru_B39240; self
0x9F733F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7344: push    offset sub_A22BA0; void (__cdecl *)()
0x9F7349: call    _atexit
0x9F734E: pop     ecx
0x9F734F: retn

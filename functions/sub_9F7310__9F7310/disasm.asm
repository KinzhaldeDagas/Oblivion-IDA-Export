0x9F7310: push    offset aSkinTintOrange; "Skin tint orange/blue"
0x9F7315: push    offset aSskintintorang; "sSkintintorange"
0x9F731A: mov     ecx, offset stru_B39238; self
0x9F731F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7324: push    offset sub_A22B90; void (__cdecl *)()
0x9F7329: call    _atexit
0x9F732E: pop     ecx
0x9F732F: retn

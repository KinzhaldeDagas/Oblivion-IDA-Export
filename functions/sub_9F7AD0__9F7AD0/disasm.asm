0x9F7AD0: push    (offset loc_6E6E69+5); defaultValue
0x9F7AD5: push    offset aIhaircolor14; "iHairColor14"
0x9F7ADA: mov     ecx, offset stru_B39428; self
0x9F7ADF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7AE4: push    offset sub_A22F70; void (__cdecl *)()
0x9F7AE9: call    _atexit
0x9F7AEE: pop     ecx
0x9F7AEF: retn

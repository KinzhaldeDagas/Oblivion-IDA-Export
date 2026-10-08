0x9F7970: push    (offset loc_417278+2); defaultValue
0x9F7975: push    offset aIhaircolor03; "iHairColor03"
0x9F797A: mov     ecx, offset stru_B393D0; self
0x9F797F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7984: push    offset sub_A22EC0; void (__cdecl *)()
0x9F7989: call    _atexit
0x9F798E: pop     ecx
0x9F798F: retn

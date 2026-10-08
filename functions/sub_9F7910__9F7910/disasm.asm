0x9F7910: push    (offset loc_7E7E7C+2); defaultValue
0x9F7915: push    offset aIhaircolor00; "iHairColor00"
0x9F791A: mov     ecx, offset stru_B393B8; self
0x9F791F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7924: push    offset sub_A22E90; void (__cdecl *)()
0x9F7929: call    _atexit
0x9F792E: pop     ecx
0x9F792F: retn

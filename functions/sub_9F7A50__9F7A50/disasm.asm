0x9F7A50: push    0F436Ah; defaultValue
0x9F7A55: push    offset aIhaircolor10; "iHairColor10"
0x9F7A5A: mov     ecx, offset stru_B39408; self
0x9F7A5F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7A64: push    offset sub_A22F30; void (__cdecl *)()
0x9F7A69: call    _atexit
0x9F7A6E: pop     ecx
0x9F7A6F: retn

0x9F7A30: push    (offset sub_416A80+1); defaultValue
0x9F7A35: push    offset aIhaircolor09; "iHairColor09"
0x9F7A3A: mov     ecx, offset stru_B39400; self
0x9F7A3F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7A44: push    offset sub_A22F20; void (__cdecl *)()
0x9F7A49: call    _atexit
0x9F7A4E: pop     ecx
0x9F7A4F: retn

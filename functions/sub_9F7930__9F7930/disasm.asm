0x9F7930: push    373739h; defaultValue
0x9F7935: push    offset aIhaircolor01; "iHairColor01"
0x9F793A: mov     ecx, offset stru_B393C0; self
0x9F793F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7944: push    offset sub_A22EA0; void (__cdecl *)()
0x9F7949: call    _atexit
0x9F794E: pop     ecx
0x9F794F: retn

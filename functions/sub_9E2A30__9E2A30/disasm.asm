0x9E2A30: push    0BB8h; defaultValue
0x9E2A35: push    offset aIsoullevelva_3; "iSoulLevelValueGrand"
0x9E2A3A: mov     ecx, 0B35B84h; self
0x9E2A3F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E2A44: push    offset sub_A1B7D0; void (__cdecl *)()
0x9E2A49: call    _atexit
0x9E2A4E: pop     ecx
0x9E2A4F: retn

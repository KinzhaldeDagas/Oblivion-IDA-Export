0x9E29F0: push    7D0h; defaultValue
0x9E29F5: push    offset aIsoullevelva_2; "iSoulLevelValueGreater"
0x9E29FA: mov     ecx, offset stru_B35B74; self
0x9E29FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E2A04: push    offset sub_A1B7B0; void (__cdecl *)()
0x9E2A09: call    _atexit
0x9E2A0E: pop     ecx
0x9E2A0F: retn

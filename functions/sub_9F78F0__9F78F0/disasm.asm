0x9F78F0: push    offset aShaircolor15; "sHairColor15"
0x9F78F5: push    offset aShaircolor15; "sHairColor15"
0x9F78FA: mov     ecx, offset stru_B393B0; self
0x9F78FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7904: push    offset sub_A22E80; void (__cdecl *)()
0x9F7909: call    _atexit
0x9F790E: pop     ecx
0x9F790F: retn

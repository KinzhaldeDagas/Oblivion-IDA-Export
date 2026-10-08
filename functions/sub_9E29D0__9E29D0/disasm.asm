0x9E29D0: push    offset aGreater; "Greater"
0x9E29D5: push    offset aSsoullevelna_2; "sSoulLevelNameGreater"
0x9E29DA: mov     ecx, offset stru_B35B6C; self
0x9E29DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E29E4: push    offset sub_A1B7A0; void (__cdecl *)()
0x9E29E9: call    _atexit
0x9E29EE: pop     ecx
0x9E29EF: retn

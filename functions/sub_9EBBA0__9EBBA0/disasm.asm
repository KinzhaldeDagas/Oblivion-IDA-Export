0x9EBBA0: push    19h; defaultValue
0x9EBBA2: push    offset aIcrimegoldpick; "iCrimeGoldPickpocket"
0x9EBBA7: mov     ecx, offset g_iCrimeGoldPickpocket_Value; self
0x9EBBAC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EBBB1: push    offset sub_A1F460; void (__cdecl *)()
0x9EBBB6: call    _atexit
0x9EBBBB: pop     ecx
0x9EBBBC: retn

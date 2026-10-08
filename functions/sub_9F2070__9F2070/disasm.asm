0x9F2070: push    offset aYouCannotInter; "You cannot interact with owned furnitur"...
0x9F2075: push    offset aSnosleepinowne; "sNoSleepInOwnedBed"
0x9F207A: mov     ecx, offset stru_B38AA8; self
0x9F207F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2084: push    offset sub_A21C70; void (__cdecl *)()
0x9F2089: call    _atexit
0x9F208E: pop     ecx
0x9F208F: retn

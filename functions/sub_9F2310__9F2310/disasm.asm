0x9F2310: push    offset aYourHorseIsSta; "Your horse is stabled outside the city "...
0x9F2315: push    offset aSfasttravelhor; "sFastTravelHorseatGate"
0x9F231A: mov     ecx, 0B38B50h; self
0x9F231F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2324: push    offset sub_A21DC0; void (__cdecl *)()
0x9F2329: call    _atexit
0x9F232E: pop     ecx
0x9F232F: retn

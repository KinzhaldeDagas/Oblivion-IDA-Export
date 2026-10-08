0x9F7530: push    offset aEyebrowsDarkLi; "Eyebrows dark/light"
0x9F7535: push    offset aSeyebrowsdark; "sEyebrowsdark"
0x9F753A: mov     ecx, offset stru_B392C0; self
0x9F753F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7544: push    offset sub_A22CA0; void (__cdecl *)()
0x9F7549: call    _atexit
0x9F754E: pop     ecx
0x9F754F: retn

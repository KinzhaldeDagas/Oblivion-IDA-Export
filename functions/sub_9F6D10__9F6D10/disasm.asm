0x9F6D10: push    offset aCheekbonesShal; "Cheekbones shallow/pronounced"
0x9F6D15: push    offset aScheekbonessha; "sCheekbonesshallow"
0x9F6D1A: mov     ecx, offset stru_B390B8; self
0x9F6D1F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6D24: push    offset sub_A22890; void (__cdecl *)()
0x9F6D29: call    _atexit
0x9F6D2E: pop     ecx
0x9F6D2F: retn

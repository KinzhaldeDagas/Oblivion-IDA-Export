0x9F6D30: push    offset aCheekbonesThin; "Cheekbones thin/wide"
0x9F6D35: push    offset aScheekbonesthi; "sCheekbonesthin"
0x9F6D3A: mov     ecx, offset stru_B390C0; self
0x9F6D3F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6D44: push    offset sub_A228A0; void (__cdecl *)()
0x9F6D49: call    _atexit
0x9F6D4E: pop     ecx
0x9F6D4F: retn

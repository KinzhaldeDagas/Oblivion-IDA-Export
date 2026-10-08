0x9F6CF0: push    offset aCheekbonesLowH; "Cheekbones low/high"
0x9F6CF5: push    offset aScheekboneslow; "sCheekboneslow"
0x9F6CFA: mov     ecx, offset stru_B390B0; self
0x9F6CFF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6D04: push    offset sub_A22880; void (__cdecl *)()
0x9F6D09: call    _atexit
0x9F6D0E: pop     ecx
0x9F6D0F: retn

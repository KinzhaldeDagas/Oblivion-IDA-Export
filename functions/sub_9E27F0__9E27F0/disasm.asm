0x9E27F0: push    1Eh; defaultValue
0x9E27F2: push    offset aIarmorweightcu; "iArmorWeightCuirass"
0x9E27F7: mov     ecx, offset stru_B35AF4; self
0x9E27FC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E2801: push    offset sub_A1B6C0; void (__cdecl *)()
0x9E2806: call    _atexit
0x9E280B: pop     ecx
0x9E280C: retn

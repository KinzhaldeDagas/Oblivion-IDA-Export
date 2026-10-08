0x9E2810: push    0Fh; defaultValue
0x9E2812: push    offset aIarmorweightgr; "iArmorWeightGreaves"
0x9E2817: mov     ecx, offset stru_B35AFC; self
0x9E281C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E2821: push    offset sub_A1B6D0; void (__cdecl *)()
0x9E2826: call    _atexit
0x9E282B: pop     ecx
0x9E282C: retn

0x9F96C0: push    offset aAgility; "Agility"
0x9F96C5: push    offset aSattributena_2; "sAttributeNameAgility"
0x9F96CA: mov     ecx, offset stru_B3A04C; self
0x9F96CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F96D4: push    offset sub_A238D0; void (__cdecl *)()
0x9F96D9: call    _atexit
0x9F96DE: pop     ecx
0x9F96DF: retn

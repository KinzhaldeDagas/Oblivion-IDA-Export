0x9EBB50: push    3E8h; defaultValue
0x9EBB55: push    offset aIcrimegoldmurd; "iCrimeGoldMurder"
0x9EBB5A: mov     ecx, offset g_iCrimeGoldMurder_Value; self
0x9EBB5F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EBB64: push    offset sub_A1F440; void (__cdecl *)()
0x9EBB69: call    _atexit
0x9EBB6E: pop     ecx
0x9EBB6F: retn

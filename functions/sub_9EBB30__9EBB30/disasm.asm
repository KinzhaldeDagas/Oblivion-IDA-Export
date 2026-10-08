0x9EBB30: push    28h ; '('; defaultValue
0x9EBB32: push    offset aIcrimegoldat_0; "iCrimeGoldAttack"
0x9EBB37: mov     ecx, offset g_iCrimeGoldAttack_Value; self
0x9EBB3C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EBB41: push    offset sub_A1F430; void (__cdecl *)()
0x9EBB46: call    _atexit
0x9EBB4B: pop     ecx
0x9EBB4C: retn

0x9EA290: push    64h ; 'd'; defaultValue
0x9EA292: push    offset aIcombathighpri; "iCombatHighPriorityModifier"
0x9EA297: mov     ecx, 0B37210h; self
0x9EA29C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA2A1: push    offset sub_A1EB40; void (__cdecl *)()
0x9EA2A6: call    _atexit
0x9EA2AB: pop     ecx
0x9EA2AC: retn

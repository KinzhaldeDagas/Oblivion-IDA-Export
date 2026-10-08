0x9EA310: push    5; defaultValue
0x9EA312: push    offset aIperkattackdis; "iPerkAttackDisarmChance"
0x9EA317: mov     ecx, 0B37228h; self
0x9EA31C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA321: push    offset sub_A1EB70; void (__cdecl *)()
0x9EA326: call    _atexit
0x9EA32B: pop     ecx
0x9EA32C: retn

0x9EA390: push    5; defaultValue
0x9EA392: push    offset aIperkmarksmanp; "iPerkMarksmanParalyzeChance"
0x9EA397: mov     ecx, 0B37248h; self
0x9EA39C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA3A1: push    offset sub_A1EBB0; void (__cdecl *)()
0x9EA3A6: call    _atexit
0x9EA3AB: pop     ecx
0x9EA3AC: retn

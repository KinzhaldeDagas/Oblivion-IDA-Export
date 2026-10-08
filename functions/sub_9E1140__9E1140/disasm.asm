0x9E1140: push    0; defaultValue
0x9E1142: push    offset aIaidefaultigno; "iAIDefaultIgnoreAlliesInArea"
0x9E1147: mov     ecx, offset stru_B35768; self
0x9E114C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E1151: push    offset sub_A1AE00; void (__cdecl *)()
0x9E1156: call    _atexit
0x9E115B: pop     ecx
0x9E115C: retn

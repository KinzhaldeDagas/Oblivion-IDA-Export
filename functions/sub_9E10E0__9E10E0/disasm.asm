0x9E10E0: push    0; defaultValue
0x9E10E2: push    offset aIaidefaultreje; "iAIDefaultRejectYield"
0x9E10E7: mov     ecx, offset stru_B35750; self
0x9E10EC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E10F1: push    offset sub_A1ADD0; void (__cdecl *)()
0x9E10F6: call    _atexit
0x9E10FB: pop     ecx
0x9E10FC: retn

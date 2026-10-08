0x9E8200: push    5Ah ; 'Z'; defaultValue
0x9E8202: push    offset aIhighresponsib; "iHighResponsibility"
0x9E8207: mov     ecx, offset stru_B36C40; self
0x9E820C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E8211: push    offset sub_A1DFA0; void (__cdecl *)()
0x9E8216: call    _atexit
0x9E821B: pop     ecx
0x9E821C: retn

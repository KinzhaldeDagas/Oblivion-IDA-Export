0x9E8120: push    5Ah ; 'Z'; defaultValue
0x9E8122: push    offset aIactorturndegr; "iActorTurnDegree"
0x9E8127: mov     ecx, 0B36C10h; self
0x9E812C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E8131: push    offset sub_A1DF40; void (__cdecl *)()
0x9E8136: call    _atexit
0x9E813B: pop     ecx
0x9E813C: retn

0x9EE130: push    0; defaultValue
0x9EE132: push    offset aImerchantrespa; "iMerchantRespawnDay1"
0x9EE137: mov     ecx, 0B37D80h; self
0x9EE13C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EE141: push    offset sub_A20220; void (__cdecl *)()
0x9EE146: call    _atexit
0x9EE14B: pop     ecx
0x9EE14C: retn

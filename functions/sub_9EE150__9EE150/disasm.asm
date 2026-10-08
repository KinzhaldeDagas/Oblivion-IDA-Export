0x9EE150: push    3; defaultValue
0x9EE152: push    offset aImerchantres_0; "iMerchantRespawnDay2"
0x9EE157: mov     ecx, offset stru_B37D88; self
0x9EE15C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EE161: push    offset sub_A20230; void (__cdecl *)()
0x9EE166: call    _atexit
0x9EE16B: pop     ecx
0x9EE16C: retn

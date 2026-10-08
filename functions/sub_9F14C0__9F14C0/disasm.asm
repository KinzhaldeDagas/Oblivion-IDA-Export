0x9F14C0: push    offset aInOrderToUseTh; "In order to use the downloaded content "...
0x9F14C5: push    offset aSrestarttousep; "sRestartToUseProfileContent"
0x9F14CA: mov     ecx, offset stru_B38818; self
0x9F14CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F14D4: push    offset sub_A21750; void (__cdecl *)()
0x9F14D9: call    _atexit
0x9F14DE: pop     ecx
0x9F14DF: retn

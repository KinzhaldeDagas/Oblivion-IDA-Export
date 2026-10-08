0x9F2BA0: push    offset aPickpocket; "Pickpocket"
0x9F2BA5: push    offset aSpickpocket; "sPickpocket"
0x9F2BAA: mov     ecx, offset stru_B38D70; self
0x9F2BAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2BB4: push    offset sub_A22200; void (__cdecl *)()
0x9F2BB9: call    _atexit
0x9F2BBE: pop     ecx
0x9F2BBF: retn

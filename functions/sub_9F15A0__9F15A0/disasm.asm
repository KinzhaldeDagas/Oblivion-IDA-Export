0x9F15A0: push    offset aRepairAllItems; "Repair all items for"
0x9F15A5: push    offset aSconfirmrepa_0; "sConfirmRepairAll"
0x9F15AA: mov     ecx, offset stru_B38850; self
0x9F15AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F15B4: push    offset sub_A217C0; void (__cdecl *)()
0x9F15B9: call    _atexit
0x9F15BE: pop     ecx
0x9F15BF: retn

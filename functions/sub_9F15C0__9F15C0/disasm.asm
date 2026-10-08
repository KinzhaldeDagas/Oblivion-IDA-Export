0x9F15C0: push    offset aRechargeThisIt; "Recharge this item for"
0x9F15C5: push    offset aSconfirmrechar; "sConfirmRecharge"
0x9F15CA: mov     ecx, offset stru_B38858; self
0x9F15CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F15D4: push    offset sub_A217D0; void (__cdecl *)()
0x9F15D9: call    _atexit
0x9F15DE: pop     ecx
0x9F15DF: retn

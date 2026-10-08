0x9F2900: push    offset aMerchantDoesNo; "Merchant does not have enough gold."
0x9F2905: push    offset aSmerchantnogol; "sMerchantNoGold"
0x9F290A: mov     ecx, offset stru_B38CC8; self
0x9F290F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2914: push    offset sub_A220B0; void (__cdecl *)()
0x9F2919: call    _atexit
0x9F291E: pop     ecx
0x9F291F: retn

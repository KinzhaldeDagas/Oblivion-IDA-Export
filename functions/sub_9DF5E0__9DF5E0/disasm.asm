0x9DF5E0: push    offset aMerchantSFesti; "Merchant's Festival"
0x9DF5E5: push    offset aSholidaymercha; "sHolidayMerchantsFestival"
0x9DF5EA: mov     ecx, 0B351B4h; self
0x9DF5EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF5F4: push    offset sub_A1A0B0; void (__cdecl *)()
0x9DF5F9: call    _atexit
0x9DF5FE: pop     ecx
0x9DF5FF: retn

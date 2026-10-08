0x9F24C0: push    offset aCannotQuickKey; "Cannot quick key bound item."
0x9F24C5: push    offset aSquickkeycante; "sQuickKeyCantEquipBound"
0x9F24CA: mov     ecx, offset stru_B38BB8; self
0x9F24CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F24D4: push    offset sub_A21E90; void (__cdecl *)()
0x9F24D9: call    _atexit
0x9F24DE: pop     ecx
0x9F24DF: retn

0x9F1720: push    offset aYouMustFirstEq; "You must first equip a weapon to poison"...
0x9F1725: push    offset aSpoisonnoweapo; "sPoisonNoWeaponMessage"
0x9F172A: mov     ecx, offset stru_B388B0; self
0x9F172F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1734: push    offset sub_A21880; void (__cdecl *)()
0x9F1739: call    _atexit
0x9F173E: pop     ecx
0x9F173F: retn

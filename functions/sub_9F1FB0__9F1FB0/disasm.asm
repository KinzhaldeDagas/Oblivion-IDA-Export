0x9F1FB0: push    offset aYouCannotRepai; "You cannot repair items during combat!"
0x9F1FB5: push    offset aScannotequipre; "sCanNotEquipRepairHammer"
0x9F1FBA: mov     ecx, offset stru_B38A78; self
0x9F1FBF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1FC4: push    offset sub_A21C10; void (__cdecl *)()
0x9F1FC9: call    _atexit
0x9F1FCE: pop     ecx
0x9F1FCF: retn

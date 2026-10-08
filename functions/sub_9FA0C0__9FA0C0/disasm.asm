0x9FA0C0: push    offset aMenusLevel_u_4; "Menus\\Level_up\\attributes_icons\\attr"...
0x9FA0C5: push    offset aSattributeic_9; "sAttributeIconSmallWillpower"
0x9FA0CA: mov     ecx, 0B3A2CCh; self
0x9FA0CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FA0D4: push    offset sub_A23DD0; void (__cdecl *)()
0x9FA0D9: call    _atexit
0x9FA0DE: pop     ecx
0x9FA0DF: retn

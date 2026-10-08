0x9F0A10: push    offset aYouCanNotFireT; "You can not fire this quest arrows."
0x9F0A15: push    offset aScannotequipqu; "sCanNotEquipQuestArrows"
0x9F0A1A: mov     ecx, offset stru_B38570; self
0x9F0A1F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0A24: push    offset sub_A21200; void (__cdecl *)()
0x9F0A29: call    _atexit
0x9F0A2E: pop     ecx
0x9F0A2F: retn

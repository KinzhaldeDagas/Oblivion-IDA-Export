0x9F1780: push    offset aDoYouWantToP_0; "Do you want to poison your next shot wi"...
0x9F1785: push    offset aSpoisonbowconf; "sPoisonBowConfirmMessage"
0x9F178A: mov     ecx, offset stru_B388C8; self
0x9F178F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1794: push    offset sub_A218B0; void (__cdecl *)()
0x9F1799: call    _atexit
0x9F179E: pop     ecx
0x9F179F: retn

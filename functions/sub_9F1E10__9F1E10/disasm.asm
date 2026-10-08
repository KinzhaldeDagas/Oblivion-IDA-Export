0x9F1E10: push    offset aYouDoNotHaveEn; "You do not have enough room to drop thi"...
0x9F1E15: push    offset aSnotenoughroom; "sNotEnoughRoomWarning"
0x9F1E1A: mov     ecx, offset stru_B38A10; self
0x9F1E1F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1E24: push    offset sub_A21B40; void (__cdecl *)()
0x9F1E29: call    _atexit
0x9F1E2E: pop     ecx
0x9F1E2F: retn

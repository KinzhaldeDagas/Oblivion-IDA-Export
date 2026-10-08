0x9F17A0: push    offset aStaffsCannotBe; "Staffs cannot be poisoned."
0x9F17A5: push    offset aSpoisonstaffsn; "sPoisonStaffsNotAllowedMessage"
0x9F17AA: mov     ecx, offset stru_B388D0; self
0x9F17AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F17B4: push    offset sub_A218C0; void (__cdecl *)()
0x9F17B9: call    _atexit
0x9F17BE: pop     ecx
0x9F17BF: retn

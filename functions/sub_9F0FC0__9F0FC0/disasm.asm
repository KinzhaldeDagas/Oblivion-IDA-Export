0x9F0FC0: push    offset aThatSaveIsNoLo; "That save is no longer available."
0x9F0FC5: push    offset aSsavenotavaila; "sSaveNotAvailable"
0x9F0FCA: mov     ecx, offset stru_B386D8; self
0x9F0FCF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0FD4: push    offset sub_A214D0; void (__cdecl *)()
0x9F0FD9: call    _atexit
0x9F0FDE: pop     ecx
0x9F0FDF: retn

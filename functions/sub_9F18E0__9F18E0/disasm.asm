0x9F18E0: push    offset aClose; "Close"
0x9F18E5: push    offset aSclosebutton; "sCloseButton"
0x9F18EA: mov     ecx, offset stru_B38920; self
0x9F18EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F18F4: push    offset sub_A21960; void (__cdecl *)()
0x9F18F9: call    _atexit
0x9F18FE: pop     ecx
0x9F18FF: retn

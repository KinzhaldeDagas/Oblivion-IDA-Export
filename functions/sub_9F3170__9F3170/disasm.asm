0x9F3170: push    offset aButton; "Button"
0x9F3175: push    offset aSbutton; "sButton"
0x9F317A: mov     ecx, offset stru_B38EB0; self
0x9F317F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F3184: push    offset sub_A22480; void (__cdecl *)()
0x9F3189: call    _atexit
0x9F318E: pop     ecx
0x9F318F: retn

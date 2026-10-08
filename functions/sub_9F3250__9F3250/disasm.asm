0x9F3250: push    offset aButtonYouWantM; "button you want mapped to this action."
0x9F3255: push    offset aScontrolsmen_0; "sControlsMenuInstructions2"
0x9F325A: mov     ecx, offset stru_B38EE8; self
0x9F325F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F3264: push    offset sub_A224F0; void (__cdecl *)()
0x9F3269: call    _atexit
0x9F326E: pop     ecx
0x9F326F: retn

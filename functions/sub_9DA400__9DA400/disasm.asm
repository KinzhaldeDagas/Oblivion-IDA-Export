0x9DA400: push    offset aTouch; "Touch"
0x9DA405: push    offset aSmagicrangetou; "sMagicRangeTouch"
0x9DA40A: mov     ecx, 0B3365Ch; self
0x9DA40F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA414: push    offset sub_A177A0; void (__cdecl *)()
0x9DA419: call    _atexit
0x9DA41E: pop     ecx
0x9DA41F: retn

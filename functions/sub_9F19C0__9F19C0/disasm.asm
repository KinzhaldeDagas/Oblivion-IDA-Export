0x9F19C0: push    offset aRange; "Range"
0x9F19C5: push    offset aSrangetext; "sRangeText"
0x9F19CA: mov     ecx, 0B38958h; self
0x9F19CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F19D4: push    offset sub_A219D0; void (__cdecl *)()
0x9F19D9: call    _atexit
0x9F19DE: pop     ecx
0x9F19DF: retn

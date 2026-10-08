0x9DA340: push    offset aWortcraft; "Wortcraft"
0x9DA345: push    offset aSmagictypewort; "sMagicTypeWortcraft"
0x9DA34A: mov     ecx, 0B3362Ch; self
0x9DA34F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA354: push    offset sub_A17740; void (__cdecl *)()
0x9DA359: call    _atexit
0x9DA35E: pop     ecx
0x9DA35F: retn

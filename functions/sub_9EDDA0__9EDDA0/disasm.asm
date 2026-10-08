0x9EDDA0: push    2378Ch; defaultValue
0x9EDDA5: push    offset aIclassrogue; "iClassRogue"
0x9EDDAA: mov     ecx, 0B37CC0h; self
0x9EDDAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDDB4: push    offset sub_A200A0; void (__cdecl *)()
0x9EDDB9: call    _atexit
0x9EDDBE: pop     ecx
0x9EDDBF: retn

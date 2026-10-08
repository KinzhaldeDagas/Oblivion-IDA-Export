0x9DC980: push    offset aNo_1; "No"
0x9DC985: push    offset aSnotext; "sNoText"
0x9DC98A: mov     ecx, 0B34DA4h; self
0x9DC98F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DC994: push    offset sub_A18A70; void (__cdecl *)()
0x9DC999: call    _atexit
0x9DC99E: pop     ecx
0x9DC99F: retn

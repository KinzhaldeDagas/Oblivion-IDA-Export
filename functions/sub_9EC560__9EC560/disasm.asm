0x9EC560: push    5; defaultValue
0x9EC562: push    offset aIpersuasionpow; "iPersuasionPower1"
0x9EC567: mov     ecx, 0B37850h; self
0x9EC56C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EC571: push    offset sub_A1F7C0; void (__cdecl *)()
0x9EC576: call    _atexit
0x9EC57B: pop     ecx
0x9EC57C: retn

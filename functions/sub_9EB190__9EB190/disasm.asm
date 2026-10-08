0x9EB190: push    23h ; '#'; defaultValue
0x9EB192: push    offset aIperkheavyarmo; "iPerkHeavyArmorJumpSum"
0x9EB197: mov     ecx, 0B374C0h; self
0x9EB19C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EB1A1: push    offset sub_A1F0A0; void (__cdecl *)()
0x9EB1A6: call    _atexit
0x9EB1AB: pop     ecx
0x9EB1AC: retn

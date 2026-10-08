0x9F1120: push    offset off_A5E878; defaultValue
0x9F1125: push    offset aSmenudisplayda; "sMenuDisplayDayString"
0x9F112A: mov     ecx, offset stru_B38730; self
0x9F112F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1134: push    offset sub_A21580; void (__cdecl *)()
0x9F1139: call    _atexit
0x9F113E: pop     ecx
0x9F113F: retn

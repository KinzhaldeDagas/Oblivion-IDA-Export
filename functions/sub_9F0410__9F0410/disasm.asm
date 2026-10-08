0x9F0410: push    offset aInfamy; "Infamy:"
0x9F0415: push    offset aSmiscinfamy; "sMiscInfamy"
0x9F041A: mov     ecx, offset stru_B383F0; self
0x9F041F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0424: push    offset sub_A20F00; void (__cdecl *)()
0x9F0429: call    _atexit
0x9F042E: pop     ecx
0x9F042F: retn

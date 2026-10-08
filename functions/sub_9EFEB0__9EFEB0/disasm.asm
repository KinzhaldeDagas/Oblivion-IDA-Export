0x9EFEB0: push    offset aS_8; "(s)"
0x9EFEB5: push    offset aSplural; "sPlural"
0x9EFEBA: mov     ecx, (offset flt_B37ED0+3C8h); self
0x9EFEBF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EFEC4: push    offset sub_A20C50; void (__cdecl *)()
0x9EFEC9: call    _atexit
0x9EFECE: pop     ecx
0x9EFECF: retn

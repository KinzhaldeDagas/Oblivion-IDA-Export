0x9FCE80: push    offset aNormal_0; "Normal"
0x9FCE85: push    offset aSnormal; "sNormal"
0x9FCE8A: mov     ecx, (offset dword_B3B744+4); self
0x9FCE8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9FCE94: push    offset sub_A25260; void (__cdecl *)()
0x9FCE99: call    _atexit
0x9FCE9E: pop     ecx
0x9FCE9F: retn

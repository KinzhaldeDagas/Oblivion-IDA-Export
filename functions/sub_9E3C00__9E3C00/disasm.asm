0x9E3C00: push    14h; defaultValue
0x9E3C02: push    offset aIvampirismageo; "iVampirismAgeOffset"
0x9E3C07: mov     ecx, (offset dword_B361CC+110h); self
0x9E3C0C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E3C11: push    offset sub_A1C1D0; void (__cdecl *)()
0x9E3C16: call    _atexit
0x9E3C1B: pop     ecx
0x9E3C1C: retn

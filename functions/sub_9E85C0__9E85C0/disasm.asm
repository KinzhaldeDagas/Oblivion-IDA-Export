0x9E85C0: push    14h; defaultValue
0x9E85C2: push    offset aIdispfamemax; "iDispFameMax"
0x9E85C7: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+10h); self
0x9E85CC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E85D1: push    offset sub_A1E0F0; void (__cdecl *)()
0x9E85D6: call    _atexit
0x9E85DB: pop     ecx
0x9E85DC: retn

0x9E85E0: push    14h; defaultValue
0x9E85E2: push    offset aIdispbountymax; "iDispBountyMax"
0x9E85E7: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+18h); self
0x9E85EC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E85F1: push    offset sub_A1E100; void (__cdecl *)()
0x9E85F6: call    _atexit
0x9E85FB: pop     ecx
0x9E85FC: retn

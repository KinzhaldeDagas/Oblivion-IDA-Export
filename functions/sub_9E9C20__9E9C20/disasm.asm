0x9E9C20: push    0Ah; defaultValue
0x9E9C22: push    offset aIaimingnumiter; "iAimingNumIterations"
0x9E9C27: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+3E8h); self
0x9E9C2C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E9C31: push    offset sub_A1E8A0; void (__cdecl *)()
0x9E9C36: call    _atexit
0x9E9C3B: pop     ecx
0x9E9C3C: retn

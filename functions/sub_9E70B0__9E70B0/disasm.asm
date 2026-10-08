0x9E70B0: push    180h; defaultValue
0x9E70B5: push    offset aIdistancetoatt; "iDistancetoAttackedTarget"
0x9E70BA: mov     ecx, (offset flt_B36778+1C0h); self
0x9E70BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E70C4: push    offset sub_A1D990; void (__cdecl *)()
0x9E70C9: call    _atexit
0x9E70CE: pop     ecx
0x9E70CF: retn

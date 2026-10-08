0x9E6720: push    3E8h; defaultValue
0x9E6725: push    offset aIsneakskilluse; "iSneakSkillUseDistance"
0x9E672A: mov     ecx, (offset flt_B36778+18h); self
0x9E672F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E6734: push    offset sub_A1D640; void (__cdecl *)()
0x9E6739: call    _atexit
0x9E673E: pop     ecx
0x9E673F: retn

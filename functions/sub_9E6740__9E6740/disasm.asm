0x9E6740: push    2EEh; defaultValue
0x9E6745: push    offset aIspeaksoundlip; "iSpeakSoundLipDistance"
0x9E674A: mov     ecx, (offset flt_B36778+20h); self
0x9E674F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E6754: push    offset sub_A1D650; void (__cdecl *)()
0x9E6759: call    _atexit
0x9E675E: pop     ecx
0x9E675F: retn

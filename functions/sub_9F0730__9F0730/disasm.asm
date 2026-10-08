0x9F0730: push    offset aTrainingSessio; "Training Sessions: "
0x9F0735: push    offset aSmisctrainings; "sMiscTrainingSessions"
0x9F073A: mov     ecx, 0B384B8h; self
0x9F073F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0744: push    offset sub_A21090; void (__cdecl *)()
0x9F0749: call    _atexit
0x9F074E: pop     ecx
0x9F074F: retn

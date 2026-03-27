0x9F0730: push    offset aTrainingSessio; "Training Sessions: "
0x9F0735: push    offset aSmisctrainings; "sMiscTrainingSessions"
0x9F073A: mov     ecx, offset sMiscTrainingSessions
0x9F073F: call    GameSetting_ConstrAndReg
0x9F0744: push    offset sub_A21090; void (__cdecl *)()
0x9F0749: call    _atexit
0x9F074E: pop     ecx
0x9F074F: retn

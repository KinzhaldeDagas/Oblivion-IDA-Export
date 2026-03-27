0x9F1480: push    offset aNoKeepPlaying_; "No, keep playing."
0x9F1485: push    offset aSnorestart; "sNoRestart"
0x9F148A: mov     ecx, offset unk_B38808
0x9F148F: call    GameSetting_ConstrAndReg
0x9F1494: push    offset sub_A21730; void (__cdecl *)()
0x9F1499: call    _atexit
0x9F149E: pop     ecx
0x9F149F: retn

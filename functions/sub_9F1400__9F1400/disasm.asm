0x9F1400: push    offset aTheSaveDeviceY; "The save device you selected is no long"...
0x9F1405: push    offset aSdeviceremoved; "sDeviceRemoved"
0x9F140A: mov     ecx, offset unk_B387E8
0x9F140F: call    GameSetting_ConstrAndReg
0x9F1414: push    offset sub_A216F0; void (__cdecl *)()
0x9F1419: call    _atexit
0x9F141E: pop     ecx
0x9F141F: retn

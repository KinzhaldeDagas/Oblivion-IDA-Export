0x9F1980: push    offset aTargetLevel; "Target Level"
0x9F1985: push    offset aSmagnitudeisle; "sMagnitudeIsLevelText"
0x9F198A: mov     ecx, offset sMagnitudeIsLevelText
0x9F198F: call    GameSetting_ConstrAndReg
0x9F1994: push    offset sub_A219B0; void (__cdecl *)()
0x9F1999: call    _atexit
0x9F199E: pop     ecx
0x9F199F: retn

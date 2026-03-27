0x9F9720: push    offset aPersonality; "Personality"
0x9F9725: push    offset aSattributena_5; "sAttributeNamePersonality"
0x9F972A: mov     ecx, offset sAttributeNamePersonality
0x9F972F: call    GameSetting_ConstrAndReg
0x9F9734: push    offset sub_A23900; void (__cdecl *)()
0x9F9739: call    _atexit
0x9F973E: pop     ecx
0x9F973F: retn

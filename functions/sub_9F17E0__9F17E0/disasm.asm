0x9F17E0: push    offset aYourPotionFail; "Your potion failed and your ingredients"...
0x9F17E5: push    offset aSpotionfailed; "sPotionFailed"
0x9F17EA: mov     ecx, offset sPotionFailed
0x9F17EF: call    GameSetting_ConstrAndReg
0x9F17F4: push    offset sub_A218E0; void (__cdecl *)()
0x9F17F9: call    _atexit
0x9F17FE: pop     ecx
0x9F17FF: retn

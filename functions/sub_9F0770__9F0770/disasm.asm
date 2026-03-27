0x9F0770: push    offset aHoursSlept; "Hours Slept: "
0x9F0775: push    offset aSmischoursslep; "sMiscHoursSlept"
0x9F077A: mov     ecx, offset sMiscHoursSlept
0x9F077F: call    GameSetting_ConstrAndReg
0x9F0784: push    offset sub_A210B0; void (__cdecl *)()
0x9F0789: call    _atexit
0x9F078E: pop     ecx
0x9F078F: retn

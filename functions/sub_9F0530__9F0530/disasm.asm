0x9F0530: push    offset aLockpicksBroke; "Lockpicks Broken: "
0x9F0535: push    offset aSmiscnumpicksb; "sMiscNumPicksBroken"
0x9F053A: mov     ecx, offset sMiscNumPicksBroken
0x9F053F: call    GameSetting_ConstrAndReg
0x9F0544: push    offset sub_A20F90; void (__cdecl *)()
0x9F0549: call    _atexit
0x9F054E: pop     ecx
0x9F054F: retn

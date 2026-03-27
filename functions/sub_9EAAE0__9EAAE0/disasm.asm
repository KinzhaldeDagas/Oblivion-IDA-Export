0x9EAAE0: push    32h ; '2'
0x9EAAE2: push    offset aIarmorbaseskil; "iArmorBaseSkill"
0x9EAAE7: mov     ecx, offset iArmorBaseSkill
0x9EAAEC: call    GameSetting_ConstrAndReg
0x9EAAF1: push    offset sub_A1EE60; void (__cdecl *)()
0x9EAAF6: call    _atexit
0x9EAAFB: pop     ecx
0x9EAAFC: retn

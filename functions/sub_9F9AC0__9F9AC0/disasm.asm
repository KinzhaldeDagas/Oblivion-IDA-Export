0x9F9AC0: push    offset aEnergy; "Energy"
0x9F9AC5: push    offset aStraitnameener; "sTraitNameEnergy"
0x9F9ACA: mov     ecx, offset sTraitNameEnergy
0x9F9ACF: call    GameSetting_ConstrAndReg
0x9F9AD4: push    offset sub_A23AD0; void (__cdecl *)()
0x9F9AD9: call    _atexit
0x9F9ADE: pop     ecx
0x9F9ADF: retn

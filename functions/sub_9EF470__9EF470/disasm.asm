0x9EF470: push    0Ah
0x9EF472: push    offset aImagicmaxpot_3; "iMagicMaxPotionsMaster"
0x9EF477: mov     ecx, offset iMagicMaxPotionsMaster
0x9EF47C: call    GameSetting_ConstrAndReg
0x9EF481: push    offset sub_A208B0; void (__cdecl *)()
0x9EF486: call    _atexit
0x9EF48B: pop     ecx
0x9EF48C: retn

0x9DA160: push    0Ah
0x9DA162: push    offset aImagicmaxsummo; "iMagicMaxSummonedCreatureTypes"
0x9DA167: mov     ecx, offset iMagicMaxSummonedCreatureTypes
0x9DA16C: call    GameSetting_ConstrAndReg
0x9DA171: push    offset sub_A17650; void (__cdecl *)()
0x9DA176: call    _atexit
0x9DA17B: pop     ecx
0x9DA17C: retn

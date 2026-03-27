0x9EE290: fldz
0x9EE292: push    ecx
0x9EE293: fstp    [esp+4+var_4]; float
0x9EE296: mov     ecx, offset fMagicFatigueDrainBase
0x9EE29B: push    offset aFmagicfatigued; "fMagicFatigueDrainBase"
0x9EE2A0: call    GameSetting_ConstrAndReg_float
0x9EE2A5: push    offset sub_A202A0; void (__cdecl *)()
0x9EE2AA: call    _atexit
0x9EE2AF: pop     ecx
0x9EE2B0: retn

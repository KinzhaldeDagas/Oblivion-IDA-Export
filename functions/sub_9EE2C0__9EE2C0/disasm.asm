0x9EE2C0: fld     ds:flt_A41304
0x9EE2C6: push    ecx
0x9EE2C7: fstp    [esp+4+var_4]; float
0x9EE2CA: push    offset aFmagicfatigu_0; "fMagicFatigueDrainMult"
0x9EE2CF: mov     ecx, offset fMagicFatigueDrainMult
0x9EE2D4: call    GameSetting_ConstrAndReg_float
0x9EE2D9: push    offset sub_A202B0; void (__cdecl *)()
0x9EE2DE: call    _atexit
0x9EE2E3: pop     ecx
0x9EE2E4: retn

0x9E69C0: fld     ds:flt_A57604
0x9E69C6: push    ecx
0x9E69C7: fstp    [esp+4+var_4]; float
0x9E69CA: push    offset aFdispactorbo_0; "fDispActorBountyMult"
0x9E69CF: mov     ecx, offset fDispActorBountyMult
0x9E69D4: call    GameSetting_ConstrAndReg_float
0x9E69D9: push    offset sub_A1D730; void (__cdecl *)()
0x9E69DE: call    _atexit
0x9E69E3: pop     ecx
0x9E69E4: retn

0x9E7FB0: fld1
0x9E7FB2: push    ecx
0x9E7FB3: fstp    [esp+4+var_4]; float
0x9E7FB6: mov     ecx, offset flt_B36BD0
0x9E7FBB: push    offset aFfirstpersonca; "fFirstPersonCameraMult"
0x9E7FC0: call    GameSetting_ConstrAndReg_float
0x9E7FC5: push    offset sub_A1DEC0; void (__cdecl *)()
0x9E7FCA: call    _atexit
0x9E7FCF: pop     ecx
0x9E7FD0: retn

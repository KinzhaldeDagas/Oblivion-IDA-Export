0x9EDAD0: fld     ds:flt_A3D65C
0x9EDAD6: push    ecx
0x9EDAD7: fstp    [esp+4+var_4]; float
0x9EDADA: push    offset aFrumbleblockst; "fRumbleBlockStrength"
0x9EDADF: mov     ecx, offset unk_B37C20
0x9EDAE4: call    GameSetting_ConstrAndReg_float
0x9EDAE9: push    offset sub_A1FF60; void (__cdecl *)()
0x9EDAEE: call    _atexit
0x9EDAF3: pop     ecx
0x9EDAF4: retn

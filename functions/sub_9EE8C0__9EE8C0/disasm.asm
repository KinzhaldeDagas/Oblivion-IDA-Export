0x9EE8C0: fld     ds:flt_A5BAC8
0x9EE8C6: push    ecx
0x9EE8C7: fstp    [esp+4+var_4]; float
0x9EE8CA: push    offset aFmagicexplos_6; "fMagicExplosionClutterMult"
0x9EE8CF: mov     ecx, offset flt_B37EC8
0x9EE8D4: call    GameSetting_ConstrAndReg_float
0x9EE8D9: push    offset sub_A204B0; void (__cdecl *)()
0x9EE8DE: call    _atexit
0x9EE8E3: pop     ecx
0x9EE8E4: retn

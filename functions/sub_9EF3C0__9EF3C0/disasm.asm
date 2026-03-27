0x9EF3C0: fld     ds:flt_A41328
0x9EF3C6: push    ecx
0x9EF3C7: fstp    [esp+4+var_4]; float
0x9EF3CA: push    offset aFmagicnighteye; "fMagicNightEyeAmbient"
0x9EF3CF: mov     ecx, offset fMagicNightEyeAmbient
0x9EF3D4: call    GameSetting_ConstrAndReg_float
0x9EF3D9: push    offset sub_A20860; void (__cdecl *)()
0x9EF3DE: call    _atexit
0x9EF3E3: pop     ecx
0x9EF3E4: retn

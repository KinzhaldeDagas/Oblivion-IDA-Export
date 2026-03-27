0x9EF390: fld1
0x9EF392: push    ecx
0x9EF393: fstp    [esp+4+var_4]; float
0x9EF396: mov     ecx, offset fMagicTelekinesiDistanceMult
0x9EF39B: push    offset aFmagictelek_13; "fMagicTelekinesiDistanceMult"
0x9EF3A0: call    GameSetting_ConstrAndReg_float
0x9EF3A5: push    offset sub_A20850; void (__cdecl *)()
0x9EF3AA: call    _atexit
0x9EF3AF: pop     ecx
0x9EF3B0: retn

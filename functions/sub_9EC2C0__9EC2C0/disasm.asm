0x9EC2C0: fld1
0x9EC2C2: push    ecx
0x9EC2C3: fstp    [esp+4+var_4]; float
0x9EC2C6: mov     ecx, offset unk_B377E0
0x9EC2CB: push    offset aFpersbullyener; "fPersBullyEner"
0x9EC2D0: call    GameSetting_ConstrAndReg_float
0x9EC2D5: push    offset sub_A1F6E0; void (__cdecl *)()
0x9EC2DA: call    _atexit
0x9EC2DF: pop     ecx
0x9EC2E0: retn

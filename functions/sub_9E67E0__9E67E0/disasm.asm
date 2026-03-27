0x9E67E0: fldz
0x9E67E2: push    ecx
0x9E67E3: fstp    [esp+4+var_4]; float
0x9E67E6: mov     ecx, offset fDispActorPerBase
0x9E67EB: push    offset aFdispactorperb; "fDispActorPerBase"
0x9E67F0: call    GameSetting_ConstrAndReg_float
0x9E67F5: push    offset sub_A1D690; void (__cdecl *)()
0x9E67FA: call    _atexit
0x9E67FF: pop     ecx
0x9E6800: retn

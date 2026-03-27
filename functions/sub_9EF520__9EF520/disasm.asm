0x9EF520: fldz
0x9EF522: push    ecx
0x9EF523: fstp    [esp+4+var_4]; float
0x9EF526: mov     ecx, offset fMagicDiseaseTransferBase
0x9EF52B: push    offset aFmagicdiseaset; "fMagicDiseaseTransferBase"
0x9EF530: call    GameSetting_ConstrAndReg_float
0x9EF535: push    offset sub_A208F0; void (__cdecl *)()
0x9EF53A: call    _atexit
0x9EF53F: pop     ecx
0x9EF540: retn

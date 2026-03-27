0x9EFDE0: fld     ds:flt_A59E20
0x9EFDE6: push    ecx
0x9EFDE7: fstp    [esp+4+var_4]; float
0x9EFDEA: push    offset aFmagiccostscal; "fMagicCostScale"
0x9EFDEF: mov     ecx, offset fMagicCostScale
0x9EFDF4: call    GameSetting_ConstrAndReg_float
0x9EFDF9: push    offset sub_A20C00; void (__cdecl *)()
0x9EFDFE: call    _atexit
0x9EFE03: pop     ecx
0x9EFE04: retn

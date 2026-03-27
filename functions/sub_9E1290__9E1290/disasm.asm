0x9E1290: fldz
0x9E1292: push    ecx
0x9E1293: fstp    [esp+4+var_4]; float
0x9E1296: mov     ecx, offset fFurnitureMarker01DeltaX
0x9E129B: push    offset aFfurnituremark; "fFurnitureMarker01DeltaX"
0x9E12A0: call    GameSetting_ConstrAndReg_float
0x9E12A5: push    offset sub_A1AE70; void (__cdecl *)()
0x9E12AA: call    _atexit
0x9E12AF: pop     ecx
0x9E12B0: retn

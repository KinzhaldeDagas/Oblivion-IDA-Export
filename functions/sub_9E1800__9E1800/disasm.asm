0x9E1800: fldz
0x9E1802: push    ecx
0x9E1803: fstp    [esp+4+var_4]; float
0x9E1806: mov     ecx, offset unk_B35918
0x9E180B: push    offset aFfurniturem_28; "fFurnitureMarker10DeltaZ"
0x9E1810: call    GameSetting_ConstrAndReg_float
0x9E1815: push    offset sub_A1B040; void (__cdecl *)()
0x9E181A: call    _atexit
0x9E181F: pop     ecx
0x9E1820: retn

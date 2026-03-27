0x9ED690: fld     ds:flt_A342A0
0x9ED696: push    ecx
0x9ED697: fstp    [esp+4+var_4]; float
0x9ED69A: push    offset aFhostileactori; "fHostileActorInteriorDistance"
0x9ED69F: mov     ecx, offset flt_B37B60
0x9ED6A4: call    GameSetting_ConstrAndReg_float
0x9ED6A9: push    offset sub_A1FDE0; void (__cdecl *)()
0x9ED6AE: call    _atexit
0x9ED6B3: pop     ecx
0x9ED6B4: retn

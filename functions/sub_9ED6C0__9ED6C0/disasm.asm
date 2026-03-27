0x9ED6C0: fld     ds:flt_A3D8F4
0x9ED6C6: push    ecx
0x9ED6C7: fstp    [esp+4+var_4]; float
0x9ED6CA: push    offset aFhostileactore; "fHostileActorExteriorDistance"
0x9ED6CF: mov     ecx, offset fHostileActorExteriorDistance
0x9ED6D4: call    GameSetting_ConstrAndReg_float
0x9ED6D9: push    offset sub_A1FDF0; void (__cdecl *)()
0x9ED6DE: call    _atexit
0x9ED6E3: pop     ecx
0x9ED6E4: retn

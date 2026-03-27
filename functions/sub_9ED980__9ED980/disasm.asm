0x9ED980: fld     ds:flt_A3D65C
0x9ED986: push    ecx
0x9ED987: fstp    [esp+4+var_4]; float
0x9ED98A: push    offset aFnpcattributeh; "fNPCAttributeHealthMult"
0x9ED98F: mov     ecx, offset fNPCAttributeHealthMult
0x9ED994: call    GameSetting_ConstrAndReg_float
0x9ED999: push    offset sub_A1FEF0; void (__cdecl *)()
0x9ED99E: call    _atexit
0x9ED9A3: pop     ecx
0x9ED9A4: retn

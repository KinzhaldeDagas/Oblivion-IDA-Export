0x9E71C0: fld     ds:kTerrainLODQuadRayDirectionZ
0x9E71C6: push    ecx
0x9E71C7: fstp    [esp+4+var_4]; float
0x9E71CA: push    offset aFpickpockett_0; "fPickPocketTargetSkillMult"
0x9E71CF: mov     ecx, (offset flt_B36778+1F0h)
0x9E71D4: call    GameSetting_ConstrAndReg_float
0x9E71D9: push    offset sub_A1D9F0; void (__cdecl *)()
0x9E71DE: call    _atexit
0x9E71E3: pop     ecx
0x9E71E4: retn

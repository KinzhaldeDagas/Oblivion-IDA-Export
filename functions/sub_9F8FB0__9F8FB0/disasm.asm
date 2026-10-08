0x9F8FB0: fld     ds:fConstant_2; Verified GameSettingFloat dynamic initializer: registers fLeafRockTimeScale with default 2.0 and registers its destructor via atexit. BSTreeManager_UpdateWindMatrices multiplies the frame delta by this setting before leaf wind scalar dispatch.
0x9F8FB6: push    ecx
0x9F8FB7: fstp    [esp+4+var_4]; float
0x9F8FBA: push    offset aFleafrocktimes; "fLeafRockTimeScale"
0x9F8FBF: mov     ecx, offset fLeafRockTimeScale
0x9F8FC4: call    GameSetting_ConstrAndReg_float
0x9F8FC9: push    offset GameSetting_fLeafRockTimeScale_atexit; void (__cdecl *)()
0x9F8FCE: call    _atexit
0x9F8FD3: pop     ecx
0x9F8FD4: retn

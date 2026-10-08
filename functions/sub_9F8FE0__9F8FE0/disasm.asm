0x9F8FE0: fld     ds:kHeadBodyNormalMatchRadius; Verified GameSettingFloat dynamic initializer: registers fLeafRustleTimeScale with default 0.5 and registers its destructor via atexit. BSTreeManager_UpdateWindMatrices multiplies the frame delta by this setting before leaf wind scalar dispatch.
0x9F8FE6: push    ecx
0x9F8FE7: fstp    [esp+4+var_4]; float
0x9F8FEA: push    offset aFleafrustletim; "fLeafRustleTimeScale"
0x9F8FEF: mov     ecx, offset fLeafRustleTimeScale
0x9F8FF4: call    GameSetting_ConstrAndReg_float
0x9F8FF9: push    offset GameSetting_fLeafRustleTimeScale_atexit; void (__cdecl *)()
0x9F8FFE: call    _atexit
0x9F9003: pop     ecx
0x9F9004: retn

0x9ED050: fld     ds:dword_A46C30
0x9ED056: push    ecx
0x9ED057: fstp    [esp+4+var_4]; float
0x9ED05A: push    offset aFdetectionnigh; "fDetectionNightEyeBonus"
0x9ED05F: mov     ecx, offset fDetectionNightEyeBonus
0x9ED064: call    GameSetting_ConstrAndReg_float
0x9ED069: push    offset sub_A1FBC0; void (__cdecl *)()
0x9ED06E: call    _atexit
0x9ED073: pop     ecx
0x9ED074: retn

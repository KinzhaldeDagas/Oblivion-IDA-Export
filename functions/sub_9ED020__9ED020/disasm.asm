0x9ED020: fld1
0x9ED022: push    ecx
0x9ED023: fstp    [esp+4+var_4]; float
0x9ED026: mov     ecx, offset fPotionGoldValueMult
0x9ED02B: push    offset aFpotiongoldval; "fPotionGoldValueMult"
0x9ED030: call    GameSetting_ConstrAndReg_float
0x9ED035: push    offset sub_A1FBB0; void (__cdecl *)()
0x9ED03A: call    _atexit
0x9ED03F: pop     ecx
0x9ED040: retn

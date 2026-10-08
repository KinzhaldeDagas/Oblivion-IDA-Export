0x9ED9E0: fld     ds:kHeadBodyNormalMatchRadius
0x9ED9E6: push    ecx
0x9ED9E7: fstp    [esp+4+var_4]; float
0x9ED9EA: push    offset aFrumblepaintim; "fRumblePainTime"
0x9ED9EF: mov     ecx, 0B37BF8h
0x9ED9F4: call    GameSetting_ConstrAndReg_float
0x9ED9F9: push    offset sub_A1FF10; void (__cdecl *)()
0x9ED9FE: call    _atexit
0x9EDA03: pop     ecx
0x9EDA04: retn

0x9ED9B0: fld     ds:flt_A35AA4
0x9ED9B6: push    ecx
0x9ED9B7: fstp    [esp+4+var_4]; float
0x9ED9BA: push    offset aFpaindelay; "fPainDelay"
0x9ED9BF: mov     ecx, offset fPainDelay
0x9ED9C4: call    GameSetting_ConstrAndReg_float
0x9ED9C9: push    offset sub_A1FF00; void (__cdecl *)()
0x9ED9CE: call    _atexit
0x9ED9D3: pop     ecx
0x9ED9D4: retn

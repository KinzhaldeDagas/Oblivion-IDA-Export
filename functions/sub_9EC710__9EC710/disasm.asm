0x9EC710: fld     ds:flt_A2FE7C
0x9EC716: push    ecx
0x9EC717: fstp    [esp+4+var_4]; float
0x9EC71A: push    offset aFspeechcraftba; "fSpeechCraftBase"
0x9EC71F: mov     ecx, offset fSpeechCraftBase
0x9EC724: call    GameSetting_ConstrAndReg_float
0x9EC729: push    offset sub_A1F890; void (__cdecl *)()
0x9EC72E: call    _atexit
0x9EC733: pop     ecx
0x9EC734: retn

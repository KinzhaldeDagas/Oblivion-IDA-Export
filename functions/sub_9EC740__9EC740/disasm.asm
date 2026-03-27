0x9EC740: fld1
0x9EC742: push    ecx
0x9EC743: fstp    [esp+4+var_4]; float
0x9EC746: mov     ecx, offset fSpeechCraftMult
0x9EC74B: push    offset aFspeechcraftmu; "fSpeechCraftMult"
0x9EC750: call    GameSetting_ConstrAndReg_float
0x9EC755: push    offset sub_A1F8A0; void (__cdecl *)()
0x9EC75A: call    _atexit
0x9EC75F: pop     ecx
0x9EC760: retn

0x7F1D90: push    esi
0x7F1D91: mov     esi, ecx
0x7F1D93: call    ??1SpeedTreeLeafShaderProperty@@UAE@XZ; SpeedTreeLeafShaderProperty::~SpeedTreeLeafShaderProperty(void)
0x7F1D98: test    byte ptr [esp+4+arg_0], 1
0x7F1D9D: jz      short loc_7F1DA8
0x7F1D9F: push    esi
0x7F1DA0: call    FormHeapFree
0x7F1DA5: add     esp, 4
0x7F1DA8: mov     eax, esi
0x7F1DAA: pop     esi
0x7F1DAB: retn    4

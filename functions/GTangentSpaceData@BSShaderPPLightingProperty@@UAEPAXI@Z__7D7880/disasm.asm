0x7D7880: push    esi
0x7D7881: mov     esi, ecx
0x7D7883: call    ??1TangentSpaceData@BSShaderPPLightingProperty@@UAE@XZ; BSShaderPPLightingProperty::TangentSpaceData::~TangentSpaceData(void)
0x7D7888: test    byte ptr [esp+4+arg_0], 1
0x7D788D: jz      short loc_7D7898
0x7D788F: push    esi
0x7D7890: call    FormHeapFree
0x7D7895: add     esp, 4
0x7D7898: mov     eax, esi
0x7D789A: pop     esi
0x7D789B: retn    4

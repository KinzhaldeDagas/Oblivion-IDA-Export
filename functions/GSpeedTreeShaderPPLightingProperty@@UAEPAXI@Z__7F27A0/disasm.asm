0x7F27A0: push    esi
0x7F27A1: mov     esi, ecx
0x7F27A3: call    ??1SpeedTreeShaderPPLightingProperty@@UAE@XZ; SpeedTreeShaderPPLightingProperty::~SpeedTreeShaderPPLightingProperty(void)
0x7F27A8: test    byte ptr [esp+4+arg_0], 1
0x7F27AD: jz      short loc_7F27B8
0x7F27AF: push    esi
0x7F27B0: call    FormHeapFree
0x7F27B5: add     esp, 4
0x7F27B8: mov     eax, esi
0x7F27BA: pop     esi
0x7F27BB: retn    4

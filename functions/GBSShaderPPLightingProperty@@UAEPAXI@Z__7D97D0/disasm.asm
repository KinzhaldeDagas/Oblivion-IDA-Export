0x7D97D0: push    esi
0x7D97D1: mov     esi, ecx
0x7D97D3: call    ??1BSShaderPPLightingProperty@@UAE@XZ; BSShaderPPLightingProperty::~BSShaderPPLightingProperty(void)
0x7D97D8: test    byte ptr [esp+4+arg_0], 1
0x7D97DD: jz      short loc_7D97E8
0x7D97DF: push    esi
0x7D97E0: call    FormHeapFree
0x7D97E5: add     esp, 4
0x7D97E8: mov     eax, esi
0x7D97EA: pop     esi
0x7D97EB: retn    4

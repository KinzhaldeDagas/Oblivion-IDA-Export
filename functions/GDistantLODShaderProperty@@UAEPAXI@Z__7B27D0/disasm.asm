0x7B27D0: push    esi
0x7B27D1: mov     esi, ecx
0x7B27D3: call    ??1DistantLODShaderProperty@@UAE@XZ; DistantLODShaderProperty::~DistantLODShaderProperty(void)
0x7B27D8: test    byte ptr [esp+4+arg_0], 1
0x7B27DD: jz      short loc_7B27E8
0x7B27DF: push    esi
0x7B27E0: call    FormHeapFree
0x7B27E5: add     esp, 4
0x7B27E8: mov     eax, esi
0x7B27EA: pop     esi
0x7B27EB: retn    4

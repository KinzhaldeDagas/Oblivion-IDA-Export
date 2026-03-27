0x7DCBB0: push    esi
0x7DCBB1: mov     esi, ecx
0x7DCBB3: call    ??1WaterShader@@UAE@XZ; WaterShader::~WaterShader(void)
0x7DCBB8: test    byte ptr [esp+4+arg_0], 1
0x7DCBBD: jz      short loc_7DCBC8
0x7DCBBF: push    esi
0x7DCBC0: call    FormHeapFree
0x7DCBC5: add     esp, 4
0x7DCBC8: mov     eax, esi
0x7DCBCA: pop     esi
0x7DCBCB: retn    4

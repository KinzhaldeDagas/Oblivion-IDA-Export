0x701A10: push    esi
0x701A11: mov     esi, ecx
0x701A13: call    ??1NiRenderer@@UAE@XZ; NiRenderer::~NiRenderer(void)
0x701A18: test    byte ptr [esp+4+arg_0], 1
0x701A1D: jz      short loc_701A28
0x701A1F: push    esi
0x701A20: call    FormHeapFree
0x701A25: add     esp, 4
0x701A28: mov     eax, esi
0x701A2A: pop     esi
0x701A2B: retn    4

0x738590: push    esi
0x738591: mov     esi, ecx
0x738593: call    ??1NiShaderFactory@@UAE@XZ; NiShaderFactory::~NiShaderFactory(void)
0x738598: test    byte ptr [esp+4+arg_0], 1
0x73859D: jz      short loc_7385A8
0x73859F: push    esi
0x7385A0: call    FormHeapFree
0x7385A5: add     esp, 4
0x7385A8: mov     eax, esi
0x7385AA: pop     esi
0x7385AB: retn    4

0x7D7080: push    esi
0x7D7081: mov     esi, ecx
0x7D7083: call    ??1BSRenderedTexture@@UAE@XZ; BSRenderedTexture::~BSRenderedTexture(void)
0x7D7088: test    byte ptr [esp+4+arg_0], 1
0x7D708D: jz      short loc_7D7098
0x7D708F: push    esi
0x7D7090: call    FormHeapFree
0x7D7095: add     esp, 4
0x7D7098: mov     eax, esi
0x7D709A: pop     esi
0x7D709B: retn    4

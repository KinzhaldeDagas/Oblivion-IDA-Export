0x7023C0: push    esi
0x7023C1: mov     esi, ecx
0x7023C3: call    ??1NiSourceTexture@@UAE@XZ; NiSourceTexture::~NiSourceTexture(void)
0x7023C8: test    byte ptr [esp+4+arg_0], 1
0x7023CD: jz      short loc_7023D8
0x7023CF: push    esi
0x7023D0: call    FormHeapFree
0x7023D5: add     esp, 4
0x7023D8: mov     eax, esi
0x7023DA: pop     esi
0x7023DB: retn    4

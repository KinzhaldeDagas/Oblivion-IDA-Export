0x71B2E0: push    esi
0x71B2E1: mov     esi, ecx
0x71B2E3: call    ??1NiImageConverter@@UAE@XZ; NiImageConverter::~NiImageConverter(void)
0x71B2E8: test    byte ptr [esp+4+arg_0], 1
0x71B2ED: jz      short loc_71B2F8
0x71B2EF: push    esi
0x71B2F0: call    FormHeapFree
0x71B2F5: add     esp, 4
0x71B2F8: mov     eax, esi
0x71B2FA: pop     esi
0x71B2FB: retn    4

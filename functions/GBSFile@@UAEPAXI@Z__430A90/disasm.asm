0x430A90: push    esi
0x430A91: mov     esi, ecx
0x430A93: call    ??1BSFile@@UAE@XZ; BSFile::~BSFile(void)
0x430A98: test    byte ptr [esp+4+arg_0], 1
0x430A9D: jz      short loc_430AA8
0x430A9F: push    esi
0x430AA0: call    FormHeapFree
0x430AA5: add     esp, 4
0x430AA8: mov     eax, esi
0x430AAA: pop     esi
0x430AAB: retn    4

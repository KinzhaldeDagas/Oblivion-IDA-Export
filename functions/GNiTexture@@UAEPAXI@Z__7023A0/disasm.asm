0x7023A0: push    esi
0x7023A1: mov     esi, ecx
0x7023A3: call    ??1NiTexture@@UAE@XZ; NiTexture::~NiTexture(void)
0x7023A8: test    byte ptr [esp+4+arg_0], 1
0x7023AD: jz      short loc_7023B8
0x7023AF: push    esi
0x7023B0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7023B5: add     esp, 4
0x7023B8: mov     eax, esi
0x7023BA: pop     esi
0x7023BB: retn    4

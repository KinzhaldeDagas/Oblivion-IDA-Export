0x733750: push    esi
0x733751: mov     esi, ecx
0x733753: call    ??1NiBackToFrontAccumulator@@UAE@XZ; NiBackToFrontAccumulator::~NiBackToFrontAccumulator(void)
0x733758: test    byte ptr [esp+4+arg_0], 1
0x73375D: jz      short loc_733768
0x73375F: push    esi
0x733760: call    FormHeapFree
0x733765: add     esp, 4
0x733768: mov     eax, esi
0x73376A: pop     esi
0x73376B: retn    4

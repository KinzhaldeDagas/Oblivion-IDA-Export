0x76CFF0: push    esi
0x76CFF1: mov     esi, ecx
0x76CFF3: call    ??1?$NiTArray@V?$NiPointer@VNiD3DPass@@@@@@UAE@XZ;
0x76CFF8: test    [esp+4+arg_0], 1
0x76CFFD: jz      short loc_76D008
0x76CFFF: push    esi
0x76D000: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x76D005: add     esp, 4
0x76D008: mov     eax, esi
0x76D00A: pop     esi
0x76D00B: retn    4

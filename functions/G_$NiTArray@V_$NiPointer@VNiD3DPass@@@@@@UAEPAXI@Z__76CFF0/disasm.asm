0x76CFF0: push    esi
0x76CFF1: mov     esi, ecx
0x76CFF3: call    ??1?$NiTArray@V?$NiPointer@VNiD3DPass@@@@@@UAE@XZ; NiTArray<NiPointer<NiD3DPass>>::~NiTArray<NiPointer<NiD3DPass>>(void)
0x76CFF8: test    [esp+4+arg_0], 1
0x76CFFD: jz      short loc_76D008
0x76CFFF: push    esi
0x76D000: call    FormHeapFree
0x76D005: add     esp, 4
0x76D008: mov     eax, esi
0x76D00A: pop     esi
0x76D00B: retn    4

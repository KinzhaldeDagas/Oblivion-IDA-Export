0x4A2370: push    esi
0x4A2371: mov     esi, ecx
0x4A2373: call    ??1?$NiTPointerMap@PBDV?$NiPointer@VNiTexture@@@@@@UAE@XZ; NiTPointerMap<char const *,NiPointer<NiTexture>>::~NiTPointerMap<char const *,NiPointer<NiTexture>>(void)
0x4A2378: test    [esp+4+arg_0], 1
0x4A237D: jz      short loc_4A2388
0x4A237F: push    esi
0x4A2380: call    FormHeapFree
0x4A2385: add     esp, 4
0x4A2388: mov     eax, esi
0x4A238A: pop     esi
0x4A238B: retn    4

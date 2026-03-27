0x5117E0: push    esi
0x5117E1: mov     esi, ecx
0x5117E3: call    ??1?$NiTPointerList@V?$NiPointer@VNiSourceTexture@@@@@@UAE@XZ; NiTPointerList<NiPointer<NiSourceTexture>>::~NiTPointerList<NiPointer<NiSourceTexture>>(void)
0x5117E8: test    [esp+4+arg_0], 1
0x5117ED: jz      short loc_5117F8
0x5117EF: push    esi
0x5117F0: call    FormHeapFree
0x5117F5: add     esp, 4
0x5117F8: mov     eax, esi
0x5117FA: pop     esi
0x5117FB: retn    4

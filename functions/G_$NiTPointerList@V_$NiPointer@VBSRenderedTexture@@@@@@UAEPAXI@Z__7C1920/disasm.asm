0x7C1920: push    esi
0x7C1921: mov     esi, ecx
0x7C1923: call    ??1?$NiTPointerList@V?$NiPointer@VBSRenderedTexture@@@@@@UAE@XZ; NiTPointerList<NiPointer<BSRenderedTexture>>::~NiTPointerList<NiPointer<BSRenderedTexture>>(void)
0x7C1928: test    [esp+4+arg_0], 1
0x7C192D: jz      short loc_7C1938
0x7C192F: push    esi
0x7C1930: call    FormHeapFree
0x7C1935: add     esp, 4
0x7C1938: mov     eax, esi
0x7C193A: pop     esi
0x7C193B: retn    4

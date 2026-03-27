0x4C93B0: push    esi
0x4C93B1: mov     esi, ecx
0x4C93B3: call    ??1?$NiTMap@PAVNiSourceTexture@@I@@UAE@XZ; NiTMap<NiSourceTexture *,uint>::~NiTMap<NiSourceTexture *,uint>(void)
0x4C93B8: test    [esp+4+arg_0], 1
0x4C93BD: jz      short loc_4C93C8
0x4C93BF: push    esi
0x4C93C0: call    FormHeapFree
0x4C93C5: add     esp, 4
0x4C93C8: mov     eax, esi
0x4C93CA: pop     esi
0x4C93CB: retn    4

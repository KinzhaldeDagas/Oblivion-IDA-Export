0x7334B0: push    esi
0x7334B1: mov     esi, ecx
0x7334B3: call    ??1?$NiTPointerList@PAVNiGeometry@@@@UAE@XZ; NiTPointerList<NiGeometry *>::~NiTPointerList<NiGeometry *>(void)
0x7334B8: test    [esp+4+arg_0], 1
0x7334BD: jz      short loc_7334C8
0x7334BF: push    esi
0x7334C0: call    FormHeapFree
0x7334C5: add     esp, 4
0x7334C8: mov     eax, esi
0x7334CA: pop     esi
0x7334CB: retn    4

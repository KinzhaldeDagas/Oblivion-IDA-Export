0x6640B0: push    esi
0x6640B1: mov     esi, ecx
0x6640B3: call    ??1?$NiTMap@IE@@UAE@XZ; NiTMap<uint,uchar>::~NiTMap<uint,uchar>(void)
0x6640B8: test    [esp+4+arg_0], 1
0x6640BD: jz      short loc_6640C8
0x6640BF: push    esi
0x6640C0: call    FormHeapFree
0x6640C5: add     esp, 4
0x6640C8: mov     eax, esi
0x6640CA: pop     esi
0x6640CB: retn    4

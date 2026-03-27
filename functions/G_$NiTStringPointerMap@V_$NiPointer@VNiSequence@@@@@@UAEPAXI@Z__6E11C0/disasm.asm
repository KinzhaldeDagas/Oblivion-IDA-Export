0x6E11C0: push    esi
0x6E11C1: mov     esi, ecx
0x6E11C3: call    ??1?$NiTStringPointerMap@V?$NiPointer@VNiSequence@@@@@@UAE@XZ; NiTStringPointerMap<NiPointer<NiSequence>>::~NiTStringPointerMap<NiPointer<NiSequence>>(void)
0x6E11C8: test    [esp+4+arg_0], 1
0x6E11CD: jz      short loc_6E11D8
0x6E11CF: push    esi
0x6E11D0: call    FormHeapFree
0x6E11D5: add     esp, 4
0x6E11D8: mov     eax, esi
0x6E11DA: pop     esi
0x6E11DB: retn    4

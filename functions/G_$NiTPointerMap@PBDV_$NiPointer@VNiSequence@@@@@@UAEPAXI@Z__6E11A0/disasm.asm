0x6E11A0: push    esi
0x6E11A1: mov     esi, ecx
0x6E11A3: call    ??1?$NiTPointerMap@PBDV?$NiPointer@VNiSequence@@@@@@UAE@XZ; NiTPointerMap<char const *,NiPointer<NiSequence>>::~NiTPointerMap<char const *,NiPointer<NiSequence>>(void)
0x6E11A8: test    [esp+4+arg_0], 1
0x6E11AD: jz      short loc_6E11B8
0x6E11AF: push    esi
0x6E11B0: call    FormHeapFree
0x6E11B5: add     esp, 4
0x6E11B8: mov     eax, esi
0x6E11BA: pop     esi
0x6E11BB: retn    4

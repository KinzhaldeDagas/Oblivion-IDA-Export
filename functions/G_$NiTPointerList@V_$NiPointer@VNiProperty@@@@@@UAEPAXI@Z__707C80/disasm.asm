0x707C80: push    esi
0x707C81: mov     esi, ecx
0x707C83: call    ??1?$NiTPointerList@V?$NiPointer@VNiProperty@@@@@@UAE@XZ; NiTPointerList<NiPointer<NiProperty>>::~NiTPointerList<NiPointer<NiProperty>>(void)
0x707C88: test    [esp+4+arg_0], 1
0x707C8D: jz      short loc_707C98
0x707C8F: push    esi
0x707C90: call    FormHeapFree
0x707C95: add     esp, 4
0x707C98: mov     eax, esi
0x707C9A: pop     esi
0x707C9B: retn    4

0x7D5490: push    esi
0x7D5491: mov     esi, ecx
0x7D5493: call    ??1?$NiTPointerList@V?$NiPointer@VNiAVObject@@@@@@UAE@XZ; NiTPointerList<NiPointer<NiAVObject>>::~NiTPointerList<NiPointer<NiAVObject>>(void)
0x7D5498: test    [esp+4+arg_0], 1
0x7D549D: jz      short loc_7D54A8
0x7D549F: push    esi
0x7D54A0: call    FormHeapFree
0x7D54A5: add     esp, 4
0x7D54A8: mov     eax, esi
0x7D54AA: pop     esi
0x7D54AB: retn    4

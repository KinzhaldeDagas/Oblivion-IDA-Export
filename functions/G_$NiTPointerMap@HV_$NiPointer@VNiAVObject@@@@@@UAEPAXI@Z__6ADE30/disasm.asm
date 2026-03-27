0x6ADE30: push    esi
0x6ADE31: mov     esi, ecx
0x6ADE33: call    ??1?$NiTPointerMap@HV?$NiPointer@VNiAVObject@@@@@@UAE@XZ; NiTPointerMap<int,NiPointer<NiAVObject>>::~NiTPointerMap<int,NiPointer<NiAVObject>>(void)
0x6ADE38: test    [esp+4+arg_0], 1
0x6ADE3D: jz      short loc_6ADE48
0x6ADE3F: push    esi
0x6ADE40: call    FormHeapFree
0x6ADE45: add     esp, 4
0x6ADE48: mov     eax, esi
0x6ADE4A: pop     esi
0x6ADE4B: retn    4

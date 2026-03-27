0x584D50: push    esi
0x584D51: mov     esi, ecx
0x584D53: call    ??1?$NiTPointerMap@PBDPAVXMLStorage@@@@UAE@XZ; NiTPointerMap<char const *,XMLStorage *>::~NiTPointerMap<char const *,XMLStorage *>(void)
0x584D58: test    [esp+4+arg_0], 1
0x584D5D: jz      short loc_584D68
0x584D5F: push    esi
0x584D60: call    FormHeapFree
0x584D65: add     esp, 4
0x584D68: mov     eax, esi
0x584D6A: pop     esi
0x584D6B: retn    4

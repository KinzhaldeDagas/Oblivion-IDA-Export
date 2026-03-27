0x749D50: push    esi
0x749D51: mov     esi, ecx
0x749D53: call    ??1?$NiTStringPointerMap@PAVNiPSysModifier@@@@UAE@XZ; NiTStringPointerMap<NiPSysModifier *>::~NiTStringPointerMap<NiPSysModifier *>(void)
0x749D58: test    [esp+4+arg_0], 1
0x749D5D: jz      short loc_749D68
0x749D5F: push    esi
0x749D60: call    FormHeapFree
0x749D65: add     esp, 4
0x749D68: mov     eax, esi
0x749D6A: pop     esi
0x749D6B: retn    4

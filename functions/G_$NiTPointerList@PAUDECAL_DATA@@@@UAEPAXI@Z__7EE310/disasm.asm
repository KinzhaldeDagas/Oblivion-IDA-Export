0x7EE310: push    esi
0x7EE311: mov     esi, ecx
0x7EE313: call    ??1?$NiTPointerList@PAUDECAL_DATA@@@@UAE@XZ; NiTPointerList<DECAL_DATA *>::~NiTPointerList<DECAL_DATA *>(void)
0x7EE318: test    [esp+4+arg_0], 1
0x7EE31D: jz      short loc_7EE328
0x7EE31F: push    esi
0x7EE320: call    FormHeapFree
0x7EE325: add     esp, 4
0x7EE328: mov     eax, esi
0x7EE32A: pop     esi
0x7EE32B: retn    4

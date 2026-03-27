0x5852A0: push    esi
0x5852A1: mov     esi, ecx
0x5852A3: call    ??1?$NiTStringPointerMap@PAVXMLStorage@@@@UAE@XZ; NiTStringPointerMap<XMLStorage *>::~NiTStringPointerMap<XMLStorage *>(void)
0x5852A8: test    [esp+4+arg_0], 1
0x5852AD: jz      short loc_5852B8
0x5852AF: push    esi
0x5852B0: call    FormHeapFree
0x5852B5: add     esp, 4
0x5852B8: mov     eax, esi
0x5852BA: pop     esi
0x5852BB: retn    4

0x6C5340: push    esi
0x6C5341: mov     esi, ecx
0x6C5343: call    ??1?$NiTStringPointerMap@PAVNiControllerSequence@@@@UAE@XZ; NiTStringPointerMap<NiControllerSequence *>::~NiTStringPointerMap<NiControllerSequence *>(void)
0x6C5348: test    [esp+4+arg_0], 1
0x6C534D: jz      short loc_6C5358
0x6C534F: push    esi
0x6C5350: call    FormHeapFree
0x6C5355: add     esp, 4
0x6C5358: mov     eax, esi
0x6C535A: pop     esi
0x6C535B: retn    4

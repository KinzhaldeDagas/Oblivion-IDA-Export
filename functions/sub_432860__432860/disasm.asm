0x432860: call    sub_4322B0
0x432865: test    al, al
0x432867: jz      short locret_43288A
0x432869: mov     eax, ModelLoaderPtr
0x43286E: push    esi
0x43286F: mov     esi, [eax+18h]
0x432872: push    edi
0x432873: mov     edi, [esi+8]
0x432876: call    ds:GetCurrentThreadId
0x43287C: cmp     edi, eax
0x43287E: pop     edi
0x43287F: jz      short loc_432889
0x432881: mov     ecx, esi
0x432883: pop     esi
0x432884: jmp     sub_431F50
0x432889: pop     esi
0x43288A: retn

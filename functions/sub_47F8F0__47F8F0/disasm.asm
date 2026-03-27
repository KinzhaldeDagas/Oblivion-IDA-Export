0x47F8F0: push    esi
0x47F8F1: mov     esi, ecx
0x47F8F3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@UVertexDist@@@@IUVertexDist@@@@6B@; const NiTMapBase<DFALL<VertexDist>,uint,VertexDist>::`vftable'
0x47F8F9: call    NiTMap_Clear
0x47F8FE: mov     eax, [esi+8]
0x47F901: push    eax
0x47F902: call    FormHeapFree
0x47F907: add     esp, 4
0x47F90A: test    [esp+4+arg_0], 1
0x47F90F: jz      short loc_47F91A
0x47F911: push    esi
0x47F912: call    FormHeapFree
0x47F917: add     esp, 4
0x47F91A: mov     eax, esi
0x47F91C: pop     esi
0x47F91D: retn    4

0x65DEC0: push    esi
0x65DEC1: mov     esi, ecx
0x65DEC3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@E@@IE@@6B@; const NiTMapBase<DFALL<uchar>,uint,uchar>::`vftable'
0x65DEC9: call    NiTMap_Clear
0x65DECE: mov     eax, [esi+8]
0x65DED1: push    eax
0x65DED2: call    FormHeapFree
0x65DED7: add     esp, 4
0x65DEDA: test    [esp+4+arg_0], 1
0x65DEDF: jz      short loc_65DEEA
0x65DEE1: push    esi
0x65DEE2: call    FormHeapFree
0x65DEE7: add     esp, 4
0x65DEEA: mov     eax, esi
0x65DEEC: pop     esi
0x65DEED: retn    4

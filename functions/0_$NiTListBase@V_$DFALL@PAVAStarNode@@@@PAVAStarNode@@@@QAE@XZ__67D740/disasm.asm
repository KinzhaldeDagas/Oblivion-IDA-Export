0x67D740: test    [esp+arg_0], 1
0x67D745: push    esi
0x67D746: mov     esi, ecx
0x67D748: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVAStarNode@@@@PAVAStarNode@@@@6B@; const NiTListBase<DFALL<AStarNode *>,AStarNode *>::`vftable'
0x67D74E: jz      short loc_67D759
0x67D750: push    esi
0x67D751: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x67D756: add     esp, 4
0x67D759: mov     eax, esi
0x67D75B: pop     esi
0x67D75C: retn    4

0x573860: test    [esp+arg_0], 1
0x573865: push    esi
0x573866: mov     esi, ecx
0x573868: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVNiTriShape@@@@PAVNiTriShape@@@@6B@; const NiTListBase<DFALL<NiTriShape *>,NiTriShape *>::`vftable'
0x57386E: jz      short loc_573879
0x573870: push    esi
0x573871: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x573876: add     esp, 4
0x573879: mov     eax, esi
0x57387B: pop     esi
0x57387C: retn    4

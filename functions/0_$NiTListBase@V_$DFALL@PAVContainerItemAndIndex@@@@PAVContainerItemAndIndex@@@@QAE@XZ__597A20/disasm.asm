0x597A20: test    [esp+arg_0], 1
0x597A25: push    esi
0x597A26: mov     esi, ecx
0x597A28: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVContainerItemAndIndex@@@@PAVContainerItemAndIndex@@@@6B@; const NiTListBase<DFALL<ContainerItemAndIndex *>,ContainerItemAndIndex *>::`vftable'
0x597A2E: jz      short loc_597A39
0x597A30: push    esi
0x597A31: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x597A36: add     esp, 4
0x597A39: mov     eax, esi
0x597A3B: pop     esi
0x597A3C: retn    4

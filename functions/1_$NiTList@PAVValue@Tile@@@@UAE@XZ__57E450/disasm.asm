0x57E450: push    0FFFFFFFFh
0x57E452: push    offset ??1?$NiTList@PAVValue@Tile@@@@UAE@XZ_SEH
0x57E457: mov     eax, large fs:0
0x57E45D: push    eax
0x57E45E: push    ecx
0x57E45F: push    esi
0x57E460: mov     eax, ds:0B30AACh
0x57E465: xor     eax, esp
0x57E467: push    eax
0x57E468: lea     eax, [esp+18h+var_C]
0x57E46C: mov     large fs:0, eax
0x57E472: mov     esi, ecx
0x57E474: mov     [esp+18h+var_10], esi
0x57E478: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVValue@Tile@@@@PAVValue@Tile@@@@6B@; const NiTPointerListBase<DFALL<Tile::Value *>,Tile::Value *>::`vftable'
0x57E47E: mov     [esp+18h+var_4], 0
0x57E486: call    NiTPointerList__FreeAllNodes
0x57E48B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVValue@Tile@@@@PAVValue@Tile@@@@6B@; const NiTListBase<DFALL<Tile::Value *>,Tile::Value *>::`vftable'
0x57E491: mov     ecx, [esp+18h+var_C]
0x57E495: mov     large fs:0, ecx
0x57E49C: pop     ecx
0x57E49D: pop     esi
0x57E49E: add     esp, 10h
0x57E4A1: retn

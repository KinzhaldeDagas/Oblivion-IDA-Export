0x57E4B0: push    0FFFFFFFFh
0x57E4B2: push    offset ??1?$NiTList@PAVTile@@@@UAE@XZ_SEH
0x57E4B7: mov     eax, large fs:0
0x57E4BD: push    eax
0x57E4BE: push    ecx
0x57E4BF: push    esi
0x57E4C0: mov     eax, ds:0B30AACh
0x57E4C5: xor     eax, esp
0x57E4C7: push    eax
0x57E4C8: lea     eax, [esp+18h+var_C]
0x57E4CC: mov     large fs:0, eax
0x57E4D2: mov     esi, ecx
0x57E4D4: mov     [esp+18h+var_10], esi
0x57E4D8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVTile@@@@PAVTile@@@@6B@; const NiTPointerListBase<DFALL<Tile *>,Tile *>::`vftable'
0x57E4DE: mov     [esp+18h+var_4], 0
0x57E4E6: call    NiTPointerList__FreeAllNodes
0x57E4EB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVTile@@@@PAVTile@@@@6B@; const NiTListBase<DFALL<Tile *>,Tile *>::`vftable'
0x57E4F1: mov     ecx, [esp+18h+var_C]
0x57E4F5: mov     large fs:0, ecx
0x57E4FC: pop     ecx
0x57E4FD: pop     esi
0x57E4FE: add     esp, 10h
0x57E501: retn

0x67FB10: push    0FFFFFFFFh
0x67FB12: push    offset ??1AStarWorldNodeList@@UAE@XZ_SEH
0x67FB17: mov     eax, large fs:0
0x67FB1D: push    eax
0x67FB1E: push    ecx
0x67FB1F: push    esi
0x67FB20: mov     eax, ds:0B30AACh
0x67FB25: xor     eax, esp
0x67FB27: push    eax
0x67FB28: lea     eax, [esp+18h+var_C]
0x67FB2C: mov     large fs:0, eax
0x67FB32: mov     esi, ecx
0x67FB34: mov     [esp+18h+var_10], esi
0x67FB38: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVAStarWorldNode@@@@PAVAStarWorldNode@@@@6B@; const NiTPointerListBase<DFALL<AStarWorldNode *>,AStarWorldNode *>::`vftable'
0x67FB3E: mov     [esp+18h+var_4], 0
0x67FB46: call    NiTPointerList__FreeAllNodes
0x67FB4B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVAStarWorldNode@@@@PAVAStarWorldNode@@@@6B@; const NiTListBase<DFALL<AStarWorldNode *>,AStarWorldNode *>::`vftable'
0x67FB51: mov     ecx, [esp+18h+var_C]
0x67FB55: mov     large fs:0, ecx
0x67FB5C: pop     ecx
0x67FB5D: pop     esi
0x67FB5E: add     esp, 10h
0x67FB61: retn

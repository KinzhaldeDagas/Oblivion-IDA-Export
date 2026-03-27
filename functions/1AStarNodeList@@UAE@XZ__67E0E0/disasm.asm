0x67E0E0: push    0FFFFFFFFh
0x67E0E2: push    offset ??1AStarNodeList@@UAE@XZ_SEH
0x67E0E7: mov     eax, large fs:0
0x67E0ED: push    eax
0x67E0EE: push    ecx
0x67E0EF: push    esi
0x67E0F0: mov     eax, ds:0B30AACh
0x67E0F5: xor     eax, esp
0x67E0F7: push    eax
0x67E0F8: lea     eax, [esp+18h+var_C]
0x67E0FC: mov     large fs:0, eax
0x67E102: mov     esi, ecx
0x67E104: mov     [esp+18h+var_10], esi
0x67E108: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVAStarNode@@@@PAVAStarNode@@@@6B@; const NiTPointerListBase<DFALL<AStarNode *>,AStarNode *>::`vftable'
0x67E10E: mov     [esp+18h+var_4], 0
0x67E116: call    NiTPointerList__FreeAllNodes
0x67E11B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVAStarNode@@@@PAVAStarNode@@@@6B@; const NiTListBase<DFALL<AStarNode *>,AStarNode *>::`vftable'
0x67E121: mov     ecx, [esp+18h+var_C]
0x67E125: mov     large fs:0, ecx
0x67E12C: pop     ecx
0x67E12D: pop     esi
0x67E12E: add     esp, 10h
0x67E131: retn

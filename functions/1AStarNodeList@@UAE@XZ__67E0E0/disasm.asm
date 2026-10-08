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
0x67E116: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x67E11B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVAStarNode@@@@PAVAStarNode@@@@6B@; const NiTListBase<DFALL<AStarNode *>,AStarNode *>::`vftable'
0x67E121: mov     ecx, [esp+18h+var_C]
0x67E125: mov     large fs:0, ecx
0x67E12C: pop     ecx
0x67E12D: pop     esi
0x67E12E: add     esp, 10h
0x67E131: retn
0x67D730: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@PAVAStarNode@@@@PAVAStarNode@@@@6B@; const NiTListBase<DFALL<AStarNode *>,AStarNode *>::`vftable'
0x67D736: retn
0x9C4A60: mov     ecx, [ebp-10h]
0x9C4A63: jmp     loc_67D730
0x9C4A68: mov     edx, [esp+arg_4]
0x9C4A6C: lea     eax, [edx-8]
0x9C4A6F: mov     ecx, [edx-0Ch]
0x9C4A72: xor     ecx, eax
0x9C4A74: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C4A79: mov     eax, offset stru_AED384
0x9C4A7E: jmp     ___CxxFrameHandler3

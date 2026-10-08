0x67FB10: push    0FFFFFFFFh; Verified AStarWorldNodeList destructor resets the NiTPointerListBase vtable, frees all list-link nodes through NiTPointerList::FreeAllNodes, then resets the base list vtable; AStarWorldNode records themselves are stored in the separate transient state table.
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
0x67FB46: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x67FB4B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVAStarWorldNode@@@@PAVAStarWorldNode@@@@6B@; const NiTListBase<DFALL<AStarWorldNode *>,AStarWorldNode *>::`vftable'
0x67FB51: mov     ecx, [esp+18h+var_C]
0x67FB55: mov     large fs:0, ecx
0x67FB5C: pop     ecx
0x67FB5D: pop     esi
0x67FB5E: add     esp, 10h
0x67FB61: retn
0x9C4AC0: mov     ecx, [ebp-10h]
0x9C4AC3: jmp     sub_67F150
0x9C4AC8: mov     edx, [esp+arg_4]
0x9C4ACC: lea     eax, [edx-8]
0x9C4ACF: mov     ecx, [edx-0Ch]
0x9C4AD2: xor     ecx, eax
0x9C4AD4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C4AD9: mov     eax, offset stru_AED3DC
0x9C4ADE: jmp     ___CxxFrameHandler3

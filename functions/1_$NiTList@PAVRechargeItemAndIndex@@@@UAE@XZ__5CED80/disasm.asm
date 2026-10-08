0x5CED80: push    0FFFFFFFFh
0x5CED82: push    offset ??1?$NiTList@PAVRechargeItemAndIndex@@@@UAE@XZ_SEH
0x5CED87: mov     eax, large fs:0
0x5CED8D: push    eax
0x5CED8E: push    ecx
0x5CED8F: push    esi
0x5CED90: mov     eax, ds:0B30AACh
0x5CED95: xor     eax, esp
0x5CED97: push    eax
0x5CED98: lea     eax, [esp+18h+var_C]
0x5CED9C: mov     large fs:0, eax
0x5CEDA2: mov     esi, ecx
0x5CEDA4: mov     [esp+18h+var_10], esi
0x5CEDA8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVRechargeItemAndIndex@@@@PAVRechargeItemAndIndex@@@@6B@; const NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::`vftable'
0x5CEDAE: mov     [esp+18h+var_4], 0
0x5CEDB6: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x5CEDBB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVRechargeItemAndIndex@@@@PAVRechargeItemAndIndex@@@@6B@; const NiTListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::`vftable'
0x5CEDC1: mov     ecx, [esp+18h+var_C]
0x5CEDC5: mov     large fs:0, ecx
0x5CEDCC: pop     ecx
0x5CEDCD: pop     esi
0x5CEDCE: add     esp, 10h
0x5CEDD1: retn
0x5CE7E0: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@PAVRechargeItemAndIndex@@@@PAVRechargeItemAndIndex@@@@6B@; const NiTListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::`vftable'
0x5CE7E6: retn
0x9C1C40: mov     ecx, [ebp-10h]
0x9C1C43: jmp     loc_5CE7E0
0x9C1C48: mov     edx, [esp+arg_4]
0x9C1C4C: lea     eax, [edx-8]
0x9C1C4F: mov     ecx, [edx-0Ch]
0x9C1C52: xor     ecx, eax
0x9C1C54: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C1C59: mov     eax, offset stru_AEAC60
0x9C1C5E: jmp     ___CxxFrameHandler3

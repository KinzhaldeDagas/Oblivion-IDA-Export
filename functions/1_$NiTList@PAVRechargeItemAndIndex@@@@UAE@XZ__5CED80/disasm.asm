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
0x5CEDB6: call    NiTPointerList__FreeAllNodes
0x5CEDBB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVRechargeItemAndIndex@@@@PAVRechargeItemAndIndex@@@@6B@; const NiTListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::`vftable'
0x5CEDC1: mov     ecx, [esp+18h+var_C]
0x5CEDC5: mov     large fs:0, ecx
0x5CEDCC: pop     ecx
0x5CEDCD: pop     esi
0x5CEDCE: add     esp, 10h
0x5CEDD1: retn

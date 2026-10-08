0x5D0CD0: push    0FFFFFFFFh
0x5D0CD2: push    offset ??1RepairMenuList@RepairMenu@@UAE@XZ_SEH
0x5D0CD7: mov     eax, large fs:0
0x5D0CDD: push    eax
0x5D0CDE: push    ecx
0x5D0CDF: push    esi
0x5D0CE0: mov     eax, ds:0B30AACh
0x5D0CE5: xor     eax, esp
0x5D0CE7: push    eax
0x5D0CE8: lea     eax, [esp+18h+var_C]
0x5D0CEC: mov     large fs:0, eax
0x5D0CF2: mov     esi, ecx
0x5D0CF4: mov     [esp+18h+var_10], esi
0x5D0CF8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVRepairItemAndIndex@@@@PAVRepairItemAndIndex@@@@6B@; const NiTPointerListBase<DFALL<RepairItemAndIndex *>,RepairItemAndIndex *>::`vftable'
0x5D0CFE: mov     [esp+18h+var_4], 0
0x5D0D06: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x5D0D0B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVRepairItemAndIndex@@@@PAVRepairItemAndIndex@@@@6B@; const NiTListBase<DFALL<RepairItemAndIndex *>,RepairItemAndIndex *>::`vftable'
0x5D0D11: mov     ecx, [esp+18h+var_C]
0x5D0D15: mov     large fs:0, ecx
0x5D0D1C: pop     ecx
0x5D0D1D: pop     esi
0x5D0D1E: add     esp, 10h
0x5D0D21: retn
0x9C1D40: mov     ecx, [ebp-10h]
0x9C1D43: jmp     sub_5D0380
0x9C1D48: mov     edx, [esp+arg_4]
0x9C1D4C: lea     eax, [edx-8]
0x9C1D4F: mov     ecx, [edx-0Ch]
0x9C1D52: xor     ecx, eax
0x9C1D54: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C1D59: mov     eax, offset stru_AEAD30
0x9C1D5E: jmp     ___CxxFrameHandler3

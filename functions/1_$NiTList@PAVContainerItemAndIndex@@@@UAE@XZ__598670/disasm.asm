0x598670: push    0FFFFFFFFh
0x598672: push    offset ??1?$NiTList@PAVContainerItemAndIndex@@@@UAE@XZ_SEH
0x598677: mov     eax, large fs:0
0x59867D: push    eax
0x59867E: push    ecx
0x59867F: push    esi
0x598680: mov     eax, ds:0B30AACh
0x598685: xor     eax, esp
0x598687: push    eax
0x598688: lea     eax, [esp+18h+var_C]
0x59868C: mov     large fs:0, eax
0x598692: mov     esi, ecx
0x598694: mov     [esp+18h+var_10], esi
0x598698: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVContainerItemAndIndex@@@@PAVContainerItemAndIndex@@@@6B@; const NiTPointerListBase<DFALL<ContainerItemAndIndex *>,ContainerItemAndIndex *>::`vftable'
0x59869E: mov     [esp+18h+var_4], 0
0x5986A6: call    NiTPointerList__FreeAllNodes
0x5986AB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVContainerItemAndIndex@@@@PAVContainerItemAndIndex@@@@6B@; const NiTListBase<DFALL<ContainerItemAndIndex *>,ContainerItemAndIndex *>::`vftable'
0x5986B1: mov     ecx, [esp+18h+var_C]
0x5986B5: mov     large fs:0, ecx
0x5986BC: pop     ecx
0x5986BD: pop     esi
0x5986BE: add     esp, 10h
0x5986C1: retn

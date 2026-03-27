0x6AA660: push    0FFFFFFFFh
0x6AA662: push    offset ??1?$NiTList@I@@UAE@XZ_SEH
0x6AA667: mov     eax, large fs:0
0x6AA66D: push    eax
0x6AA66E: push    ecx
0x6AA66F: push    esi
0x6AA670: mov     eax, ds:0B30AACh
0x6AA675: xor     eax, esp
0x6AA677: push    eax
0x6AA678: lea     eax, [esp+18h+var_C]
0x6AA67C: mov     large fs:0, eax
0x6AA682: mov     esi, ecx
0x6AA684: mov     [esp+18h+var_10], esi
0x6AA688: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@I@@I@@6B@; const NiTPointerListBase<DFALL<uint>,uint>::`vftable'
0x6AA68E: mov     [esp+18h+var_4], 0
0x6AA696: call    NiTPointerList__FreeAllNodes
0x6AA69B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@I@@I@@6B@; const NiTListBase<DFALL<uint>,uint>::`vftable'
0x6AA6A1: mov     ecx, [esp+18h+var_C]
0x6AA6A5: mov     large fs:0, ecx
0x6AA6AC: pop     ecx
0x6AA6AD: pop     esi
0x6AA6AE: add     esp, 10h
0x6AA6B1: retn

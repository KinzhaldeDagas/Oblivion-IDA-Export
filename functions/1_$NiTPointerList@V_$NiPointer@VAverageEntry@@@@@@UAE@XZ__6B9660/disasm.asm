0x6B9660: push    0FFFFFFFFh
0x6B9662: push    offset ??1?$NiTPointerList@V?$NiPointer@VAverageEntry@@@@@@UAE@XZ_SEH
0x6B9667: mov     eax, large fs:0
0x6B966D: push    eax
0x6B966E: push    ecx
0x6B966F: push    esi
0x6B9670: mov     eax, ds:0B30AACh
0x6B9675: xor     eax, esp
0x6B9677: push    eax
0x6B9678: lea     eax, [esp+18h+var_C]
0x6B967C: mov     large fs:0, eax
0x6B9682: mov     esi, ecx
0x6B9684: mov     [esp+18h+var_10], esi
0x6B9688: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VAverageEntry@@@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<AverageEntry>>::`vftable'
0x6B968E: mov     [esp+18h+var_4], 0
0x6B9696: call    NiTPointerList__FreeAllNodes
0x6B969B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VAverageEntry@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<AverageEntry>>::`vftable'
0x6B96A1: mov     ecx, [esp+18h+var_C]
0x6B96A5: mov     large fs:0, ecx
0x6B96AC: pop     ecx
0x6B96AD: pop     esi
0x6B96AE: add     esp, 10h
0x6B96B1: retn

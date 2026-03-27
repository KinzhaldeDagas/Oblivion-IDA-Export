0x7D53F0: push    0FFFFFFFFh
0x7D53F2: push    offset ??1?$NiTPointerList@V?$NiPointer@VNiAVObject@@@@@@UAE@XZ_SEH
0x7D53F7: mov     eax, large fs:0
0x7D53FD: push    eax
0x7D53FE: push    ecx
0x7D53FF: push    esi
0x7D5400: mov     eax, ds:0B30AACh
0x7D5405: xor     eax, esp
0x7D5407: push    eax
0x7D5408: lea     eax, [esp+18h+var_C]
0x7D540C: mov     large fs:0, eax
0x7D5412: mov     esi, ecx
0x7D5414: mov     [esp+18h+var_10], esi
0x7D5418: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<NiAVObject>>::`vftable'
0x7D541E: mov     [esp+18h+var_4], 0
0x7D5426: call    NiTPointerList__FreeAllNodes
0x7D542B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<NiAVObject>>::`vftable'
0x7D5431: mov     ecx, [esp+18h+var_C]
0x7D5435: mov     large fs:0, ecx
0x7D543C: pop     ecx
0x7D543D: pop     esi
0x7D543E: add     esp, 10h
0x7D5441: retn

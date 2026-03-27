0x7EE270: push    0FFFFFFFFh
0x7EE272: push    offset ??1?$NiTPointerList@PAUDECAL_DATA@@@@UAE@XZ_SEH
0x7EE277: mov     eax, large fs:0
0x7EE27D: push    eax
0x7EE27E: push    ecx
0x7EE27F: push    esi
0x7EE280: mov     eax, ds:0B30AACh
0x7EE285: xor     eax, esp
0x7EE287: push    eax
0x7EE288: lea     eax, [esp+18h+var_C]
0x7EE28C: mov     large fs:0, eax
0x7EE292: mov     esi, ecx
0x7EE294: mov     [esp+18h+var_10], esi
0x7EE298: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAUDECAL_DATA@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,DECAL_DATA *>::`vftable'
0x7EE29E: mov     [esp+18h+var_4], 0
0x7EE2A6: call    NiTPointerList__FreeAllNodes
0x7EE2AB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAUDECAL_DATA@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,DECAL_DATA *>::`vftable'
0x7EE2B1: mov     ecx, [esp+18h+var_C]
0x7EE2B5: mov     large fs:0, ecx
0x7EE2BC: pop     ecx
0x7EE2BD: pop     esi
0x7EE2BE: add     esp, 10h
0x7EE2C1: retn

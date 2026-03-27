0x714710: push    0FFFFFFFFh
0x714712: push    offset SEH_714710
0x714717: mov     eax, large fs:0
0x71471D: push    eax
0x71471E: sub     esp, 8
0x714721: push    ebx
0x714722: push    esi
0x714723: mov     eax, ds:0B30AACh
0x714728: xor     eax, esp
0x71472A: push    eax
0x71472B: lea     eax, [esp+20h+var_C]
0x71472F: mov     large fs:0, eax
0x714735: push    14h; Size
0x714737: call    FormHeapAlloc
0x71473C: mov     esi, eax
0x71473E: add     esp, 4
0x714741: mov     [esp+20h+var_10], esi
0x714745: xor     ebx, ebx
0x714747: cmp     esi, ebx
0x714749: mov     [esp+20h+var_4], ebx
0x71474D: jz      short loc_714796
0x71474F: xor     ecx, ecx
0x714751: mov     eax, 3Bh ; ';'
0x714756: mov     [esi+4], eax
0x714759: mov     edx, 4
0x71475E: mul     edx
0x714760: seto    cl
0x714763: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDP6APAVNiObject@@XZ@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiObject * (*)(void)>::`vftable'
0x714769: mov     [esi+0Ch], ebx
0x71476C: neg     ecx
0x71476E: or      ecx, eax
0x714770: push    ecx; Size
0x714771: call    FormHeapAlloc
0x714776: mov     ecx, [esi+4]
0x714779: add     ecx, ecx
0x71477B: add     ecx, ecx
0x71477D: push    ecx
0x71477E: push    ebx
0x71477F: push    eax
0x714780: mov     [esi+8], eax
0x714783: call    __memset
0x714788: add     esp, 10h
0x71478B: mov     [esi+10h], bl
0x71478E: mov     dword ptr [esi], offset ??_7?$NiTStringPointerMap@P6APAVNiObject@@XZ@@6B@; const NiTStringPointerMap<NiObject * (*)(void)>::`vftable'
0x714794: jmp     short loc_714798
0x714796: xor     esi, esi
0x714798: push    10h; Size
0x71479A: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7147A2: mov     ds:0B3FB80h, esi
0x7147A8: call    FormHeapAlloc
0x7147AD: add     esp, 4
0x7147B0: cmp     eax, ebx
0x7147B2: jz      short loc_7147E6
0x7147B4: mov     dword ptr [eax], offset ??_7?$NiTArray@P6AXAAVNiStream@@PAVNiObject@@@Z@@6B@; const NiTArray<void (*)(NiStream &,NiObject *)>::`vftable'
0x7147BA: mov     [eax+8], bx
0x7147BE: mov     word ptr [eax+0Eh], 3
0x7147C4: mov     [eax+0Ah], bx
0x7147C8: mov     [eax+0Ch], bx
0x7147CC: mov     [eax+4], ebx
0x7147CF: mov     ds:0B3FB84h, eax
0x7147D4: mov     ecx, [esp+20h+var_C]
0x7147D8: mov     large fs:0, ecx
0x7147DF: pop     ecx
0x7147E0: pop     esi
0x7147E1: pop     ebx
0x7147E2: add     esp, 14h
0x7147E5: retn
0x7147E6: mov     ds:0B3FB84h, ebx
0x7147EC: mov     ecx, [esp+20h+var_C]
0x7147F0: mov     large fs:0, ecx
0x7147F7: pop     ecx
0x7147F8: pop     esi
0x7147F9: pop     ebx
0x7147FA: add     esp, 14h
0x7147FD: retn

0x77E7A0: sub     esp, 0Ch
0x77E7A3: push    ebx
0x77E7A4: push    ebp
0x77E7A5: push    esi
0x77E7A6: mov     esi, ecx
0x77E7A8: mov     dword ptr [esi], offset ??_7NiDynamicGeometryGroup@@6B@; const NiDynamicGeometryGroup::`vftable'
0x77E7AE: mov     ecx, [esi+10h]
0x77E7B1: xor     ebx, ebx
0x77E7B3: xor     eax, eax
0x77E7B5: cmp     ecx, ebx
0x77E7B7: push    edi
0x77E7B8: jbe     short loc_77E7D2
0x77E7BA: mov     edi, [esi+14h]
0x77E7BD: mov     edx, edi
0x77E7BF: nop
0x77E7C0: cmp     [edx], ebx
0x77E7C2: jnz     loc_77E923
0x77E7C8: add     eax, 1
0x77E7CB: add     edx, 4
0x77E7CE: cmp     eax, ecx
0x77E7D0: jb      short loc_77E7C0
0x77E7D2: xor     eax, eax
0x77E7D4: cmp     eax, ebx
0x77E7D6: mov     [esp+1Ch+var_C], eax
0x77E7DA: jz      short loc_77E83A
0x77E7DC: lea     esp, [esp+0]
0x77E7E0: lea     eax, [esp+1Ch+var_4]
0x77E7E4: push    eax
0x77E7E5: lea     ecx, [esp+20h+var_8]
0x77E7E9: push    ecx
0x77E7EA: lea     edx, [esp+24h+var_C]
0x77E7EE: lea     edi, [esi+0Ch]
0x77E7F1: push    edx
0x77E7F2: mov     ecx, edi
0x77E7F4: call    sub_452600
0x77E7F9: mov     eax, [esp+1Ch+var_8]
0x77E7FD: push    eax
0x77E7FE: mov     ecx, edi
0x77E800: call    NiTMap_RemoveAt
0x77E805: mov     edi, [esp+1Ch+var_4]
0x77E809: cmp     edi, ebx
0x77E80B: jz      short loc_77E834
0x77E80D: mov     eax, [edi+10h]
0x77E810: cmp     eax, ebx
0x77E812: jz      short loc_77E81C
0x77E814: mov     ecx, [eax]
0x77E816: mov     edx, [ecx+8]
0x77E819: push    eax
0x77E81A: call    edx
0x77E81C: mov     eax, [edi+0Ch]
0x77E81F: cmp     eax, ebx
0x77E821: jz      short loc_77E82B
0x77E823: mov     ecx, [eax]
0x77E825: mov     edx, [ecx+8]
0x77E828: push    eax
0x77E829: call    edx
0x77E82B: push    edi
0x77E82C: call    FormHeapFree
0x77E831: add     esp, 4
0x77E834: cmp     [esp+1Ch+var_C], ebx
0x77E838: jnz     short loc_77E7E0
0x77E83A: mov     edx, [esi+20h]
0x77E83D: lea     ebp, [esi+1Ch]
0x77E840: xor     eax, eax
0x77E842: cmp     edx, ebx
0x77E844: jbe     short loc_77E862
0x77E846: mov     edi, [ebp+8]
0x77E849: mov     ecx, edi
0x77E84B: jmp     short loc_77E850
0x77E84D: align 10h
0x77E850: cmp     [ecx], ebx
0x77E852: jnz     loc_77E92B
0x77E858: add     eax, 1
0x77E85B: add     ecx, 4
0x77E85E: cmp     eax, edx
0x77E860: jb      short loc_77E850
0x77E862: xor     eax, eax
0x77E864: cmp     eax, ebx
0x77E866: mov     [esp+1Ch+var_C], eax
0x77E86A: jz      short loc_77E8A8
0x77E86C: lea     esp, [esp+0]
0x77E870: lea     eax, [esp+1Ch+var_8]
0x77E874: push    eax
0x77E875: lea     ecx, [esp+20h+var_4]
0x77E879: push    ecx
0x77E87A: lea     edx, [esp+24h+var_C]
0x77E87E: push    edx
0x77E87F: mov     ecx, ebp
0x77E881: call    sub_452600
0x77E886: mov     eax, [esp+1Ch+var_4]
0x77E88A: push    eax
0x77E88B: mov     ecx, ebp
0x77E88D: call    NiTMap_RemoveAt
0x77E892: mov     eax, [esp+1Ch+var_8]
0x77E896: push    eax
0x77E897: mov     [eax+8], ebx
0x77E89A: call    FormHeapFree
0x77E89F: add     esp, 4
0x77E8A2: cmp     [esp+1Ch+var_C], ebx
0x77E8A6: jnz     short loc_77E870
0x77E8A8: xor     edi, edi
0x77E8AA: cmp     [esi+34h], bx
0x77E8AE: jbe     loc_77E978
0x77E8B4: movzx   ecx, word ptr [esi+36h]
0x77E8B8: cmp     edi, ecx
0x77E8BA: jnb     short loc_77E917
0x77E8BC: mov     edx, [esi+30h]
0x77E8BF: mov     ebx, [edx+edi*4]
0x77E8C2: test    ebx, ebx
0x77E8C4: lea     eax, [edx+edi*4]
0x77E8C7: mov     dword ptr [eax], 0
0x77E8CD: jz      short loc_77E8D5
0x77E8CF: add     word ptr [esi+38h], 0FFFFh
0x77E8D5: movzx   eax, word ptr [esi+36h]
0x77E8D9: movzx   ecx, ax
0x77E8DC: sub     ecx, 1
0x77E8DF: cmp     edi, ecx
0x77E8E1: jnz     short loc_77E8EA
0x77E8E3: add     eax, 0FFFFFFFFh
0x77E8E6: mov     [esi+36h], ax
0x77E8EA: test    ebx, ebx
0x77E8EC: jz      short loc_77E915
0x77E8EE: mov     eax, [ebx+10h]
0x77E8F1: test    eax, eax
0x77E8F3: jz      short loc_77E8FD
0x77E8F5: mov     edx, [eax]
0x77E8F7: push    eax
0x77E8F8: mov     eax, [edx+8]
0x77E8FB: call    eax
0x77E8FD: mov     eax, [ebx+0Ch]
0x77E900: test    eax, eax
0x77E902: jz      short loc_77E90C
0x77E904: mov     ecx, [eax]
0x77E906: mov     edx, [ecx+8]
0x77E909: push    eax
0x77E90A: call    edx
0x77E90C: push    ebx
0x77E90D: call    FormHeapFree
0x77E912: add     esp, 4
0x77E915: xor     ebx, ebx
0x77E917: movzx   eax, word ptr [esi+46h]
0x77E91B: cmp     edi, eax
0x77E91D: jb      short loc_77E933
0x77E91F: xor     eax, eax
0x77E921: jmp     short loc_77E95D
0x77E923: mov     eax, [edi+eax*4]
0x77E926: jmp     loc_77E7D4
0x77E92B: mov     eax, [edi+eax*4]
0x77E92E: jmp     loc_77E864
0x77E933: mov     ecx, [esi+40h]
0x77E936: mov     eax, [ecx+edi*4]
0x77E939: cmp     eax, ebx
0x77E93B: lea     ecx, [ecx+edi*4]
0x77E93E: mov     [ecx], ebx
0x77E940: jz      short loc_77E948
0x77E942: add     word ptr [esi+48h], 0FFFFh
0x77E948: movzx   ecx, word ptr [esi+46h]
0x77E94C: movzx   edx, cx
0x77E94F: sub     edx, 1
0x77E952: cmp     edi, edx
0x77E954: jnz     short loc_77E95D
0x77E956: add     ecx, 0FFFFFFFFh
0x77E959: mov     [esi+46h], cx
0x77E95D: push    eax
0x77E95E: mov     [eax+8], ebx
0x77E961: call    FormHeapFree
0x77E966: movzx   eax, word ptr [esi+34h]
0x77E96A: add     edi, 1
0x77E96D: add     esp, 4
0x77E970: cmp     edi, eax
0x77E972: jb      loc_77E8B4
0x77E978: cmp     esi, ds:0B428A4h
0x77E97E: jnz     short loc_77E986
0x77E980: mov     ds:0B428A4h, ebx
0x77E986: mov     ecx, [esi+40h]
0x77E989: push    ecx
0x77E98A: mov     dword ptr [esi+3Ch], offset ??_7?$NiTArray@PAVNiVBChip@@@@6B@; const NiTArray<NiVBChip *>::`vftable'
0x77E991: call    FormHeapFree
0x77E996: mov     edx, [esi+30h]
0x77E999: push    edx
0x77E99A: mov     dword ptr [esi+2Ch], offset ??_7?$NiTArray@PAVNiVBDynamicSet@@@@6B@; const NiTArray<NiVBDynamicSet *>::`vftable'
0x77E9A1: call    FormHeapFree
0x77E9A6: add     esp, 8
0x77E9A9: mov     ecx, ebp
0x77E9AB: mov     dword ptr [ebp+0], offset ??_7?$NiTPointerMap@IPAVNiVBChip@@@@6B@; const NiTPointerMap<uint,NiVBChip *>::`vftable'
0x77E9B2: call    NiTMap_Clear
0x77E9B7: mov     ecx, ebp
0x77E9B9: mov     dword ptr [ebp+0], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiVBChip@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiVBChip *>::`vftable'
0x77E9C0: call    NiTMap_Clear
0x77E9C5: mov     eax, [ebp+8]
0x77E9C8: push    eax
0x77E9C9: call    FormHeapFree
0x77E9CE: lea     edi, [esi+0Ch]
0x77E9D1: add     esp, 4
0x77E9D4: mov     ecx, edi
0x77E9D6: mov     dword ptr [edi], offset ??_7?$NiTPointerMap@IPAVNiVBDynamicSet@@@@6B@; const NiTPointerMap<uint,NiVBDynamicSet *>::`vftable'
0x77E9DC: call    NiTMap_Clear
0x77E9E1: mov     ecx, edi
0x77E9E3: mov     dword ptr [edi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiVBDynamicSet@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiVBDynamicSet *>::`vftable'
0x77E9E9: call    NiTMap_Clear
0x77E9EE: mov     ecx, [edi+8]
0x77E9F1: push    ecx
0x77E9F2: call    FormHeapFree
0x77E9F7: add     esp, 4
0x77E9FA: pop     edi
0x77E9FB: mov     ecx, esi
0x77E9FD: pop     esi
0x77E9FE: pop     ebp
0x77E9FF: pop     ebx
0x77EA00: add     esp, 0Ch
0x77EA03: jmp     sub_7828F0

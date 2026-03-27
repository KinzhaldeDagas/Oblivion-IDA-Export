0x93B7D0: push    ebp
0x93B7D1: mov     ebp, esp
0x93B7D3: and     esp, 0FFFFFFF0h
0x93B7D6: sub     esp, 74h
0x93B7D9: push    ebx
0x93B7DA: push    esi
0x93B7DB: mov     esi, ecx
0x93B7DD: cmp     dword ptr [esi+4], 3
0x93B7E1: push    edi
0x93B7E2: jnz     short loc_93B814
0x93B7E4: mov     eax, [esi]
0x93B7E6: xor     ebx, ebx
0x93B7E8: test    eax, eax
0x93B7EA: jle     short loc_93B814
0x93B7EC: lea     edi, [esi+20h]
0x93B7EF: nop
0x93B7F0: push    0
0x93B7F2: lea     eax, [esi+0A0h]
0x93B7F8: push    eax
0x93B7F9: push    edi
0x93B7FA: mov     ecx, esi
0x93B7FC: call    sub_93B000
0x93B801: cmp     eax, 7
0x93B804: jz      loc_93B9C9
0x93B80A: mov     eax, [esi]
0x93B80C: inc     ebx
0x93B80D: add     edi, 10h
0x93B810: cmp     ebx, eax
0x93B812: jl      short loc_93B7F0
0x93B814: cmp     dword ptr [esi], 3
0x93B817: jnz     short loc_93B84A
0x93B819: mov     eax, [esi+4]
0x93B81C: xor     ebx, ebx
0x93B81E: test    eax, eax
0x93B820: jle     short loc_93B84A
0x93B822: lea     edi, [esi+0A0h]
0x93B828: push    0
0x93B82A: lea     eax, [esi+20h]
0x93B82D: push    eax
0x93B82E: push    edi
0x93B82F: mov     ecx, esi
0x93B831: call    sub_93B000
0x93B836: cmp     eax, 7
0x93B839: jz      loc_93B9E4
0x93B83F: mov     eax, [esi+4]
0x93B842: inc     ebx
0x93B843: add     edi, 10h
0x93B846: cmp     ebx, eax
0x93B848: jl      short loc_93B828
0x93B84A: mov     eax, [esi]
0x93B84C: mov     ebx, [esi+4]
0x93B84F: xor     ecx, ecx
0x93B851: cmp     eax, 3
0x93B854: setz    cl
0x93B857: xor     edx, edx
0x93B859: cmp     ebx, 3
0x93B85C: setz    dl
0x93B85F: xor     eax, eax
0x93B861: mov     [esp+80h+var_64], 7F7FFFFFh
0x93B869: mov     [esp+80h+var_5C], eax
0x93B86D: lea     ecx, [ecx+ecx+1]
0x93B871: cmp     ecx, eax
0x93B873: mov     [esp+80h+var_54], ecx
0x93B877: lea     edx, [edx+edx+1]
0x93B87B: mov     [esp+80h+var_60], edx
0x93B87F: mov     [esp+80h+var_58], eax
0x93B883: mov     [esp+80h+var_6C], eax
0x93B887: jle     loc_93B953
0x93B88D: lea     eax, [esi+20h]
0x93B890: mov     [esp+80h+var_68], eax
0x93B894: xor     edi, edi
0x93B896: test    edx, edx
0x93B898: jle     loc_93B93B
0x93B89E: lea     ebx, [esi+0A0h]
0x93B8A4: mov     ecx, [esp+80h+var_6C]
0x93B8A8: movsx   edx, ds:byte_A99F0E[ecx]
0x93B8AF: movsx   ecx, ds:byte_A99F0E[edi]
0x93B8B6: movaps  xmm0, xmmword ptr [eax]
0x93B8B9: add     edx, 2
0x93B8BC: shl     edx, 4
0x93B8BF: movaps  xmm1, xmmword ptr [edx+esi]
0x93B8C3: subps   xmm1, xmm0
0x93B8C6: movaps  xmm0, xmmword ptr [ebx]
0x93B8C9: add     ecx, 0Ah
0x93B8CC: shl     ecx, 4
0x93B8CF: movaps  [esp+80h+var_40], xmm1
0x93B8D4: movaps  xmm1, xmmword ptr [ecx+esi]
0x93B8D8: lea     edx, [esp+80h+var_30]
0x93B8DC: push    edx
0x93B8DD: lea     ecx, [esp+84h+var_50]
0x93B8E1: push    ecx
0x93B8E2: push    ebx
0x93B8E3: lea     edx, [esp+8Ch+var_40]
0x93B8E7: push    edx
0x93B8E8: subps   xmm1, xmm0
0x93B8EB: push    eax
0x93B8EC: movaps  [esp+94h+var_50], xmm1
0x93B8F1: call    sub_8D1A30
0x93B8F6: fld     [esp+94h+var_10]
0x93B8FD: fcomp   [esp+94h+var_64]
0x93B901: add     esp, 14h
0x93B904: fnstsw  ax
0x93B906: test    ah, 5
0x93B909: jp      short loc_93B91F
0x93B90B: mov     eax, [esp+80h+var_10]
0x93B90F: mov     ecx, [esp+80h+var_6C]
0x93B913: mov     [esp+80h+var_64], eax
0x93B917: mov     [esp+80h+var_5C], ecx
0x93B91B: mov     [esp+80h+var_58], edi
0x93B91F: mov     eax, [esp+80h+var_60]
0x93B923: inc     edi
0x93B924: add     ebx, 10h
0x93B927: cmp     edi, eax
0x93B929: mov     eax, [esp+80h+var_68]
0x93B92D: jl      loc_93B8A4
0x93B933: mov     edx, [esp+80h+var_60]
0x93B937: mov     ecx, [esp+80h+var_54]
0x93B93B: mov     edi, [esp+80h+var_6C]
0x93B93F: inc     edi
0x93B940: add     eax, 10h
0x93B943: cmp     edi, ecx
0x93B945: mov     [esp+80h+var_6C], edi
0x93B949: mov     [esp+80h+var_68], eax
0x93B94D: jl      loc_93B894
0x93B953: cmp     ecx, 3
0x93B956: jnz     short loc_93B97E
0x93B958: mov     edi, [esi]
0x93B95A: mov     ecx, [esp+80h+var_5C]
0x93B95E: dec     edi
0x93B95F: mov     [esi], edi
0x93B961: movsx   ecx, ds:byte_A99F0C[ecx]
0x93B968: mov     eax, edi
0x93B96A: add     eax, 2
0x93B96D: shl     eax, 4
0x93B970: movaps  xmm0, xmmword ptr [eax+esi]
0x93B974: add     ecx, 2
0x93B977: shl     ecx, 4
0x93B97A: movaps  xmmword ptr [ecx+esi], xmm0
0x93B97E: cmp     edx, 3
0x93B981: jnz     short loc_93B9C2
0x93B983: mov     eax, [esi+4]
0x93B986: mov     edx, [esp+80h+var_58]
0x93B98A: dec     eax
0x93B98B: mov     [esi+4], eax
0x93B98E: mov     ecx, eax
0x93B990: movsx   eax, ds:byte_A99F0C[edx]
0x93B997: add     ecx, 0Eh
0x93B99A: shl     ecx, 4
0x93B99D: movaps  xmm0, xmmword ptr [ecx+esi]
0x93B9A1: lea     edx, [eax+0Eh]
0x93B9A4: shl     edx, 4
0x93B9A7: movaps  xmmword ptr [edx+esi], xmm0
0x93B9AB: mov     ecx, [esi+4]
0x93B9AE: add     ecx, 0Ah
0x93B9B1: shl     ecx, 4
0x93B9B4: movaps  xmm0, xmmword ptr [ecx+esi]
0x93B9B8: add     eax, 0Ah
0x93B9BB: shl     eax, 4
0x93B9BE: movaps  xmmword ptr [eax+esi], xmm0
0x93B9C2: pop     edi
0x93B9C3: pop     esi
0x93B9C4: pop     ebx
0x93B9C5: mov     esp, ebp
0x93B9C7: pop     ebp
0x93B9C8: retn
0x93B9C9: add     ebx, 2
0x93B9CC: shl     ebx, 4
0x93B9CF: movaps  xmm0, xmmword ptr [ebx+esi]
0x93B9D3: movaps  xmmword ptr [esi+20h], xmm0
0x93B9D7: mov     dword ptr [esi], 1
0x93B9DD: pop     edi
0x93B9DE: pop     esi
0x93B9DF: pop     ebx
0x93B9E0: mov     esp, ebp
0x93B9E2: pop     ebp
0x93B9E3: retn
0x93B9E4: lea     eax, [ebx+0Eh]
0x93B9E7: shl     eax, 4
0x93B9EA: movaps  xmm0, xmmword ptr [eax+esi]
0x93B9EE: add     ebx, 0Ah
0x93B9F1: movaps  xmmword ptr [esi+0E0h], xmm0
0x93B9F8: shl     ebx, 4
0x93B9FB: movaps  xmm0, xmmword ptr [ebx+esi]
0x93B9FF: pop     edi
0x93BA00: movaps  xmmword ptr [esi+0A0h], xmm0
0x93BA07: mov     dword ptr [esi+4], 1
0x93BA0E: pop     esi
0x93BA0F: pop     ebx
0x93BA10: mov     esp, ebp
0x93BA12: pop     ebp
0x93BA13: retn

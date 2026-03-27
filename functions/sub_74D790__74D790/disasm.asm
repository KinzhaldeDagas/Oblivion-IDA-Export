0x74D790: push    ecx
0x74D791: push    edi
0x74D792: mov     edi, ecx
0x74D794: movzx   eax, word ptr [edi+0Ah]
0x74D798: test    ax, ax
0x74D79B: jnz     short loc_74D7AC
0x74D79D: mov     eax, [esp+8+arg_0]
0x74D7A1: mov     dword ptr [eax], 0
0x74D7A7: pop     edi
0x74D7A8: pop     ecx
0x74D7A9: retn    4
0x74D7AC: mov     ecx, [edi+4]
0x74D7AF: add     eax, 0FFFFFFFFh
0x74D7B2: push    ebx
0x74D7B3: mov     [edi+0Ah], ax
0x74D7B7: push    ebp
0x74D7B8: mov     ebp, ds:0A28078h
0x74D7BE: movzx   eax, ax
0x74D7C1: push    esi
0x74D7C2: mov     esi, [ecx+eax*4]
0x74D7C5: test    esi, esi
0x74D7C7: jz      short loc_74D7CF
0x74D7C9: lea     edx, [esi+4]
0x74D7CC: push    edx; lpAddend
0x74D7CD: call    ebp ; InterlockedIncrement
0x74D7CF: movzx   ecx, word ptr [edi+0Ah]
0x74D7D3: mov     edx, [edi+4]
0x74D7D6: lea     eax, [esp+14h+var_4]
0x74D7DA: push    eax
0x74D7DB: lea     ecx, [edx+ecx*4]
0x74D7DE: mov     [esp+18h+var_4], 0
0x74D7E6: call    sub_55E2A0
0x74D7EB: test    esi, esi
0x74D7ED: setnz   al
0x74D7F0: test    al, al
0x74D7F2: jz      short loc_74D7FA
0x74D7F4: add     word ptr [edi+0Ch], 0FFFFh
0x74D7FA: test    esi, esi
0x74D7FC: mov     ebx, [esp+14h+arg_0]
0x74D800: mov     [ebx], esi
0x74D802: jz      short loc_74D81F
0x74D804: lea     edi, [esi+4]
0x74D807: push    edi; lpAddend
0x74D808: call    ebp ; InterlockedIncrement
0x74D80A: push    edi; lpAddend
0x74D80B: call    dword ptr ds:0A2807Ch
0x74D811: test    eax, eax
0x74D813: jnz     short loc_74D81F
0x74D815: mov     eax, [esi]
0x74D817: mov     edx, [eax]
0x74D819: push    1
0x74D81B: mov     ecx, esi
0x74D81D: call    edx
0x74D81F: pop     esi
0x74D820: pop     ebp
0x74D821: mov     eax, ebx
0x74D823: pop     ebx
0x74D824: pop     edi
0x74D825: pop     ecx
0x74D826: retn    4

0x946250: push    ecx
0x946251: push    ebx
0x946252: push    ebp
0x946253: mov     ebp, [esp+0Ch+arg_0]
0x946257: push    esi
0x946258: dec     ecx; switch 26 cases
0x946259: cmp     ecx, 19h
0x94625C: push    edi
0x94625D: mov     edi, eax
0x94625F: mov     ebx, edx
0x946261: ja      def_946277; jumptable 00946277 default case, cases 19-21,23
0x946267: mov     esi, [esp+14h+arg_4]
0x94626B: add     esi, esi
0x94626D: lea     ecx, [ecx+0]
0x946270: movzx   eax, ds:byte_946324[ecx]
0x946277: jmp     ds:jpt_946277[eax*4]; switch jump
0x94627E: mov     ecx, [ebp+0]; jumptable 00946277 cases 14-18
0x946281: movzx   eax, word ptr [ecx+esi+2]
0x946286: shl     eax, 4
0x946289: add     eax, ebx
0x94628B: mov     ecx, 0Ch
0x946290: add     esi, 2
0x946293: mov     ebx, eax
0x946295: jmp     short loc_9462F1
0x946297: mov     edx, [ebp+0]; jumptable 00946277 cases 22,26
0x94629A: movzx   eax, word ptr [edx+esi+2]
0x94629F: mov     ecx, edi
0x9462A1: mov     [esp+14h+var_4], eax
0x9462A5: call    sub_940CF0
0x9462AA: imul    eax, [esp+14h+var_4]
0x9462AF: add     eax, [ebx]
0x9462B1: movzx   ecx, byte ptr [edi+0Dh]
0x9462B5: add     esi, 2
0x9462B8: mov     ebx, eax
0x9462BA: jmp     short loc_9462F1
0x9462BC: test    edi, edi; jumptable 00946277 case 25
0x9462BE: jz      short def_946277; jumptable 00946277 default case, cases 19-21,23
0x9462C0: mov     eax, [edi+4]
0x9462C3: test    eax, eax
0x9462C5: jz      short def_946277; jumptable 00946277 default case, cases 19-21,23
0x9462C7: mov     ecx, edi
0x9462C9: call    sub_90D1F0
0x9462CE: test    eax, eax
0x9462D0: jz      short def_946277; jumptable 00946277 default case, cases 19-21,23
0x9462D2: mov     ecx, [ebp+0]
0x9462D5: movzx   edx, word ptr [ecx+esi+2]
0x9462DA: push    edx
0x9462DB: mov     ecx, eax
0x9462DD: call    sub_90D260
0x9462E2: mov     edi, eax
0x9462E4: movzx   edx, word ptr [edi+12h]
0x9462E8: movzx   ecx, byte ptr [edi+0Ch]
0x9462EC: add     esi, 2
0x9462EF: add     ebx, edx
0x9462F1: dec     ecx
0x9462F2: cmp     ecx, 19h
0x9462F5: jbe     loc_946270
0x9462FB: pop     edi; jumptable 00946277 default case, cases 19-21,23
0x9462FC: pop     esi
0x9462FD: pop     ebp
0x9462FE: xor     eax, eax
0x946300: pop     ebx
0x946301: pop     ecx
0x946302: retn
0x946303: pop     edi; jumptable 00946277 cases 1-13,24
0x946304: pop     esi
0x946305: pop     ebp
0x946306: mov     eax, ebx
0x946308: pop     ebx
0x946309: pop     ecx
0x94630A: retn

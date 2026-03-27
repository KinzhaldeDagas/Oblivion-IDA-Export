0x70B6A0: sub     esp, 8
0x70B6A3: push    ebx
0x70B6A4: push    esi
0x70B6A5: mov     esi, [esp+10h+arg_0]
0x70B6A9: push    edi
0x70B6AA: push    esi
0x70B6AB: mov     edi, ecx
0x70B6AD: call    sub_708330
0x70B6B2: movzx   eax, word ptr [edi+0B6h]
0x70B6B9: push    1
0x70B6BB: lea     ecx, [esp+18h+var_4]
0x70B6BF: push    ecx
0x70B6C0: mov     [esp+1Ch+arg_0], eax
0x70B6C4: mov     eax, [esi+220h]
0x70B6CA: push    4
0x70B6CC: lea     edx, [esp+20h+arg_0]
0x70B6D0: push    edx
0x70B6D1: push    eax
0x70B6D2: mov     eax, [eax+8]
0x70B6D5: mov     [esp+28h+var_4], 4
0x70B6DD: call    eax
0x70B6DF: xor     ebx, ebx
0x70B6E1: add     esp, 14h
0x70B6E4: cmp     [esp+14h+arg_0], ebx
0x70B6E8: jbe     short loc_70B71B
0x70B6EA: lea     ebx, [ebx+0]
0x70B6F0: movzx   ecx, word ptr [edi+0B6h]
0x70B6F7: cmp     ecx, ebx
0x70B6F9: ja      short loc_70B6FF
0x70B6FB: xor     eax, eax
0x70B6FD: jmp     short loc_70B708
0x70B6FF: mov     edx, [edi+0B0h]
0x70B705: mov     eax, [edx+ebx*4]
0x70B708: mov     edx, [esi]
0x70B70A: push    eax
0x70B70B: mov     eax, [edx+2Ch]
0x70B70E: mov     ecx, esi
0x70B710: call    eax
0x70B712: add     ebx, 1
0x70B715: cmp     ebx, [esp+14h+arg_0]
0x70B719: jb      short loc_70B6F0
0x70B71B: mov     ecx, [edi+0C8h]
0x70B721: mov     eax, [esi+220h]
0x70B727: push    1
0x70B729: lea     edx, [esp+18h+var_4]
0x70B72D: push    edx
0x70B72E: mov     [esp+1Ch+var_8], ecx
0x70B732: mov     edx, [eax+8]
0x70B735: push    4
0x70B737: lea     ecx, [esp+20h+var_8]
0x70B73B: push    ecx
0x70B73C: push    eax
0x70B73D: mov     [esp+28h+var_4], 4
0x70B745: call    edx
0x70B747: add     esp, 14h
0x70B74A: cmp     [esp+14h+var_8], 0
0x70B74F: jle     short loc_70B776
0x70B751: mov     edi, [edi+0C4h]
0x70B757: test    edi, edi
0x70B759: jz      short loc_70B776
0x70B75B: jmp     short loc_70B760
0x70B75D: align 10h
0x70B760: mov     edx, [esi]
0x70B762: mov     edx, [edx+2Ch]
0x70B765: lea     eax, [edi+8]
0x70B768: mov     eax, [eax]
0x70B76A: mov     edi, [edi+4]
0x70B76D: push    eax
0x70B76E: mov     ecx, esi
0x70B770: call    edx
0x70B772: test    edi, edi
0x70B774: jnz     short loc_70B760
0x70B776: pop     edi
0x70B777: pop     esi
0x70B778: pop     ebx
0x70B779: add     esp, 8
0x70B77C: retn    4

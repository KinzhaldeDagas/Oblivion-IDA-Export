0x91C620: push    ecx
0x91C621: push    ebx
0x91C622: push    ebp
0x91C623: mov     ebp, ecx
0x91C625: test    ebp, ebp
0x91C627: push    esi
0x91C628: push    edi
0x91C629: mov     [esp+14h+var_4], ebp
0x91C62D: jz      short loc_91C634
0x91C62F: lea     eax, [ebp+28h]
0x91C632: jmp     short loc_91C636
0x91C634: xor     eax, eax
0x91C636: mov     ebx, [esp+14h+arg_0]
0x91C63A: push    eax
0x91C63B: mov     ecx, ebx
0x91C63D: call    sub_899CA0
0x91C642: test    ebp, ebp
0x91C644: jz      short loc_91C64B
0x91C646: lea     eax, [ebp+2Ch]
0x91C649: jmp     short loc_91C64D
0x91C64B: xor     eax, eax
0x91C64D: push    eax
0x91C64E: mov     ecx, ebx
0x91C650: call    sub_899D20
0x91C655: mov     ecx, [ebx+3Ch]
0x91C658: xor     eax, eax
0x91C65A: test    ecx, ecx
0x91C65C: mov     [esp+14h+arg_0], eax
0x91C660: jle     short loc_91C6A1
0x91C662: mov     ecx, [ebx+38h]
0x91C665: mov     esi, [ecx+eax*4]
0x91C668: mov     ecx, [esi+38h]
0x91C66B: add     esi, 34h ; '4'
0x91C66E: xor     edi, edi
0x91C670: test    ecx, ecx
0x91C672: jle     short loc_91C695
0x91C674: add     ebp, 28h ; '('
0x91C677: mov     eax, [esi]
0x91C679: mov     ecx, [eax+edi*4]
0x91C67C: mov     edx, [ebp+0]
0x91C67F: push    ecx
0x91C680: mov     ecx, ebp
0x91C682: call    dword ptr [edx+4]
0x91C685: mov     eax, [esi+4]
0x91C688: inc     edi
0x91C689: cmp     edi, eax
0x91C68B: jl      short loc_91C677
0x91C68D: mov     ebp, [esp+14h+var_4]
0x91C691: mov     eax, [esp+14h+arg_0]
0x91C695: mov     ecx, [ebx+3Ch]
0x91C698: inc     eax
0x91C699: cmp     eax, ecx
0x91C69B: mov     [esp+14h+arg_0], eax
0x91C69F: jl      short loc_91C662
0x91C6A1: mov     ecx, [ebx+48h]
0x91C6A4: xor     eax, eax
0x91C6A6: test    ecx, ecx
0x91C6A8: mov     [esp+14h+arg_0], eax
0x91C6AC: jle     short loc_91C6EF
0x91C6AE: mov     edi, edi
0x91C6B0: mov     edx, [ebx+44h]
0x91C6B3: mov     esi, [edx+eax*4]
0x91C6B6: mov     ecx, [esi+38h]
0x91C6B9: add     esi, 34h ; '4'
0x91C6BC: xor     edi, edi
0x91C6BE: test    ecx, ecx
0x91C6C0: jle     short loc_91C6E3
0x91C6C2: add     ebp, 28h ; '('
0x91C6C5: mov     ecx, [esi]
0x91C6C7: mov     edx, [ecx+edi*4]
0x91C6CA: mov     eax, [ebp+0]
0x91C6CD: push    edx
0x91C6CE: mov     ecx, ebp
0x91C6D0: call    dword ptr [eax+4]
0x91C6D3: mov     eax, [esi+4]
0x91C6D6: inc     edi
0x91C6D7: cmp     edi, eax
0x91C6D9: jl      short loc_91C6C5
0x91C6DB: mov     eax, [esp+14h+arg_0]
0x91C6DF: mov     ebp, [esp+14h+var_4]
0x91C6E3: mov     ecx, [ebx+48h]
0x91C6E6: inc     eax
0x91C6E7: cmp     eax, ecx
0x91C6E9: mov     [esp+14h+arg_0], eax
0x91C6ED: jl      short loc_91C6B0
0x91C6EF: mov     ebx, [ebx+30h]
0x91C6F2: test    ebx, ebx
0x91C6F4: jz      short loc_91C718
0x91C6F6: mov     eax, [ebx+38h]
0x91C6F9: xor     esi, esi
0x91C6FB: test    eax, eax
0x91C6FD: jle     short loc_91C718
0x91C6FF: lea     edi, [ebp+28h]
0x91C702: mov     ecx, [ebx+34h]
0x91C705: mov     edx, [ecx+esi*4]
0x91C708: mov     eax, [edi]
0x91C70A: push    edx
0x91C70B: mov     ecx, edi
0x91C70D: call    dword ptr [eax+4]
0x91C710: mov     eax, [ebx+38h]
0x91C713: inc     esi
0x91C714: cmp     esi, eax
0x91C716: jl      short loc_91C702
0x91C718: pop     edi
0x91C719: pop     esi
0x91C71A: pop     ebp
0x91C71B: pop     ebx
0x91C71C: pop     ecx
0x91C71D: retn    4

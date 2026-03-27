0x91E860: push    ebp
0x91E861: push    esi
0x91E862: mov     esi, ecx
0x91E864: mov     eax, [esi+24h]
0x91E867: test    eax, eax
0x91E869: lea     ebp, [esi+28h]
0x91E86C: push    edi
0x91E86D: mov     dword ptr [esi], offset off_A9D8B8
0x91E873: mov     dword ptr [esi+8], offset off_A9D8A0
0x91E87A: mov     dword ptr [esi+20h], offset off_A9D84C
0x91E881: mov     dword ptr [ebp+0], offset off_A9D894
0x91E888: jz      short loc_91E8AD
0x91E88A: mov     ecx, [eax+60h]
0x91E88D: xor     edi, edi
0x91E88F: test    ecx, ecx
0x91E891: jle     short loc_91E8AD
0x91E893: mov     eax, [esi+24h]
0x91E896: mov     ecx, [eax+5Ch]
0x91E899: mov     ecx, [ecx+edi*4]
0x91E89C: push    ebp
0x91E89D: call    sub_898A80
0x91E8A2: mov     edx, [esi+24h]
0x91E8A5: mov     eax, [edx+60h]
0x91E8A8: inc     edi
0x91E8A9: cmp     edi, eax
0x91E8AB: jl      short loc_91E893
0x91E8AD: push    ebx
0x91E8AE: mov     ebx, [esi+30h]
0x91E8B1: test    ebx, ebx
0x91E8B3: jle     short loc_91E8CC
0x91E8B5: xor     edi, edi
0x91E8B7: mov     ecx, [esi+2Ch]
0x91E8BA: mov     eax, [ecx+edi]
0x91E8BD: add     ecx, edi
0x91E8BF: push    0
0x91E8C1: call    dword ptr [eax]
0x91E8C3: add     edi, 80h ; '€'
0x91E8C9: dec     ebx
0x91E8CA: jnz     short loc_91E8B7
0x91E8CC: mov     eax, [esi+34h]
0x91E8CF: test    eax, eax
0x91E8D1: pop     ebx
0x91E8D2: js      short loc_91E908
0x91E8D4: mov     ecx, ds:0BA9DE4h
0x91E8DA: mov     edx, large fs:2Ch
0x91E8E1: mov     ecx, [edx+ecx*4]
0x91E8E4: mov     ecx, [ecx+19Ch]
0x91E8EA: test    ecx, ecx
0x91E8EC: jnz     short loc_91E8F4
0x91E8EE: mov     ecx, ds:0BA7D9Ch
0x91E8F4: mov     edx, [esi+2Ch]
0x91E8F7: and     eax, 3FFFFFFFh
0x91E8FC: push    14h
0x91E8FE: shl     eax, 7
0x91E901: push    eax
0x91E902: push    edx
0x91E903: call    sub_8A75D0
0x91E908: pop     edi
0x91E909: mov     ecx, esi
0x91E90B: pop     esi
0x91E90C: mov     dword ptr [ebp+0], offset off_A9D2B4
0x91E913: pop     ebp
0x91E914: jmp     sub_949180

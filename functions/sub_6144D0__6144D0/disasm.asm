0x6144D0: push    ebp
0x6144D1: mov     ebp, [esp+4+arg_0]
0x6144D5: test    ebp, ebp
0x6144D7: jnz     short loc_6144DF
0x6144D9: xor     eax, eax
0x6144DB: pop     ebp
0x6144DC: retn    8
0x6144DF: push    ebx
0x6144E0: mov     ebx, [ecx+40h]
0x6144E3: test    ebx, ebx
0x6144E5: mov     [esp+8+arg_0], 0
0x6144ED: jz      short loc_614542
0x6144EF: push    esi
0x6144F0: push    edi
0x6144F1: cmp     dword ptr [ebx+4], 0
0x6144F5: jnz     short loc_6144FC
0x6144F7: cmp     dword ptr [ebx], 0
0x6144FA: jz      short loc_614540
0x6144FC: mov     eax, [ebx]
0x6144FE: mov     esi, [eax]
0x614500: xor     edi, edi
0x614502: cmp     esi, ebp
0x614504: jnz     short loc_61450D
0x614506: mov     edi, 64h ; 'd'
0x61450B: jmp     short loc_614529
0x61450D: push    esi
0x61450E: mov     ecx, ebp
0x614510: call    sub_5E9D40
0x614515: test    al, al
0x614517: jz      short loc_614529
0x614519: mov     edx, [ebp+0]
0x61451C: mov     eax, [edx+224h]
0x614522: push    esi
0x614523: mov     ecx, ebp
0x614525: call    eax
0x614527: mov     edi, eax
0x614529: cmp     edi, [esp+10h+arg_0]
0x61452D: jle     short loc_614539
0x61452F: mov     ecx, [esp+10h+arg_4]
0x614533: mov     [esp+10h+arg_0], edi
0x614537: mov     [ecx], esi
0x614539: mov     ebx, [ebx+4]
0x61453C: test    ebx, ebx
0x61453E: jnz     short loc_6144F1
0x614540: pop     edi
0x614541: pop     esi
0x614542: mov     eax, [esp+8+arg_0]
0x614546: pop     ebx
0x614547: pop     ebp
0x614548: retn    8

0x4A7270: sub     esp, 8
0x4A7273: push    edi
0x4A7274: mov     edi, ecx
0x4A7276: cmp     dword ptr [edi+24h], 4
0x4A727A: mov     [esp+0Ch+var_4], edi
0x4A727E: jnb     short loc_4A7289
0x4A7280: xor     al, al
0x4A7282: pop     edi
0x4A7283: add     esp, 8
0x4A7286: retn    4
0x4A7289: push    ebx
0x4A728A: push    ebp
0x4A728B: mov     ebp, [edi+4]
0x4A728E: mov     eax, [ebp+4]
0x4A7291: test    eax, eax
0x4A7293: push    esi
0x4A7294: mov     ebx, edi
0x4A7296: jz      short loc_4A730B
0x4A7298: mov     ecx, eax
0x4A729A: test    ecx, ecx
0x4A729C: jz      short loc_4A72A3
0x4A729E: mov     esi, [ecx+4]
0x4A72A1: jmp     short loc_4A72A5
0x4A72A3: xor     esi, esi
0x4A72A5: mov     [esp+18h+var_5], 0
0x4A72AA: lea     ebx, [ebx+0]
0x4A72B0: test    esi, esi
0x4A72B2: jnz     short loc_4A72C6
0x4A72B4: cmp     [esp+18h+arg_0], 0
0x4A72B9: jz      short loc_4A72C1
0x4A72BB: cmp     ebx, edi
0x4A72BD: jz      short loc_4A72C1
0x4A72BF: mov     esi, edi
0x4A72C1: mov     [esp+18h+var_5], 1
0x4A72C6: test    ebx, ebx
0x4A72C8: jz      short loc_4A72EF
0x4A72CA: test    ecx, ecx
0x4A72CC: jz      short loc_4A72EF
0x4A72CE: test    esi, esi
0x4A72D0: jz      short loc_4A72EF
0x4A72D2: mov     eax, [esi]
0x4A72D4: mov     ecx, [ecx]
0x4A72D6: mov     edx, [ebp+0]
0x4A72D9: mov     edi, [ebx]
0x4A72DB: push    eax
0x4A72DC: push    ecx
0x4A72DD: push    edx
0x4A72DE: push    edi
0x4A72DF: call    sub_4A6AF0
0x4A72E4: add     esp, 10h
0x4A72E7: test    al, al
0x4A72E9: jnz     short loc_4A7317
0x4A72EB: mov     edi, [esp+18h+var_4]
0x4A72EF: test    esi, esi
0x4A72F1: mov     ecx, esi
0x4A72F3: jz      short loc_4A72F8
0x4A72F5: mov     esi, [esi+4]
0x4A72F8: cmp     [esp+18h+var_5], 0
0x4A72FD: jz      short loc_4A72B0
0x4A72FF: mov     ebx, ebp
0x4A7301: mov     ebp, [ebp+4]
0x4A7304: mov     eax, [ebp+4]
0x4A7307: test    eax, eax
0x4A7309: jnz     short loc_4A7298
0x4A730B: pop     esi
0x4A730C: pop     ebp
0x4A730D: pop     ebx
0x4A730E: xor     al, al
0x4A7310: pop     edi
0x4A7311: add     esp, 8
0x4A7314: retn    4
0x4A7317: pop     esi
0x4A7318: pop     ebp
0x4A7319: pop     ebx
0x4A731A: mov     al, 1
0x4A731C: pop     edi
0x4A731D: add     esp, 8
0x4A7320: retn    4

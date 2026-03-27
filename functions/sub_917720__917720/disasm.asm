0x917720: mov     eax, [esp+arg_10]
0x917724: push    ebx
0x917725: push    ebp
0x917726: xor     ebx, ebx
0x917728: mov     edx, 80000000h
0x91772D: push    esi
0x91772E: mov     esi, ecx
0x917730: mov     [esi+0Ch], eax
0x917733: mov     word ptr [esi+6], 1
0x917739: mov     [esi+8], ebx
0x91773C: mov     dword ptr [esi], offset off_A9D068
0x917742: mov     [esi+30h], ebx
0x917745: mov     [esi+34h], ebx
0x917748: mov     [esi+38h], edx
0x91774B: mov     ecx, edx
0x91774D: push    edi
0x91774E: mov     edi, [esp+10h+arg_C]
0x917752: mov     eax, ecx
0x917754: mov     [esi+40h], ebx
0x917757: mov     [esi+44h], ebx
0x91775A: mov     [esi+48h], edx
0x91775D: mov     ebp, [edi+4]
0x917760: and     eax, 3FFFFFFFh
0x917765: cmp     eax, ebp
0x917767: jge     short loc_9177D9
0x917769: test    edx, ecx
0x91776B: mov     ebp, ds:0BA9DE4h
0x917771: jnz     short loc_91779C
0x917773: mov     ecx, large fs:2Ch
0x91777A: mov     edx, [ecx+ebp*4]
0x91777D: mov     ecx, [edx+19Ch]
0x917783: cmp     ecx, ebx
0x917785: jnz     short loc_91778D
0x917787: mov     ecx, ds:0BA7D9Ch
0x91778D: push    14h
0x91778F: shl     eax, 4
0x917792: push    eax
0x917793: mov     eax, [esi+40h]
0x917796: push    eax
0x917797: call    sub_8A75D0
0x91779C: mov     ecx, large fs:2Ch
0x9177A3: mov     edx, [ecx+ebp*4]
0x9177A6: mov     eax, [edx+19Ch]
0x9177AC: cmp     eax, ebx
0x9177AE: jnz     short loc_9177B5
0x9177B0: mov     eax, ds:0BA7D9Ch
0x9177B5: mov     ecx, [edi+4]
0x9177B8: shl     ecx, 4
0x9177BB: push    14h
0x9177BD: push    ecx
0x9177BE: mov     ecx, eax
0x9177C0: call    sub_8A7560
0x9177C5: mov     edx, [esi+48h]
0x9177C8: mov     [esi+40h], eax
0x9177CB: mov     eax, [edi+4]
0x9177CE: and     edx, 40000000h
0x9177D4: or      edx, eax
0x9177D6: mov     [esi+48h], edx
0x9177D9: mov     ecx, [edi+4]
0x9177DC: cmp     ecx, ebx
0x9177DE: mov     eax, [esi+40h]
0x9177E1: mov     [esi+44h], ecx
0x9177E4: mov     edx, [edi]
0x9177E6: jle     short loc_9177FD
0x9177E8: sub     edx, eax
0x9177EA: lea     ebx, [ebx+0]
0x9177F0: movaps  xmm0, xmmword ptr [edx+eax]
0x9177F4: movaps  xmmword ptr [eax], xmm0
0x9177F7: add     eax, 10h
0x9177FA: dec     ecx
0x9177FB: jnz     short loc_9177F0
0x9177FD: mov     eax, [esp+10h+arg_4]
0x917801: mov     ecx, [esp+10h+arg_8]
0x917805: mov     edx, [esp+10h+arg_0]
0x917809: push    eax
0x91780A: push    ecx
0x91780B: push    edx
0x91780C: mov     ecx, esi
0x91780E: call    sub_917290
0x917813: pop     edi
0x917814: mov     eax, esi
0x917816: pop     esi
0x917817: pop     ebp
0x917818: pop     ebx
0x917819: retn    14h

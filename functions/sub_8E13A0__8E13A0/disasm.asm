0x8E13A0: push    ecx
0x8E13A1: push    ebp
0x8E13A2: mov     ebp, ecx
0x8E13A4: mov     ecx, [ebp+0]
0x8E13A7: mov     eax, [ebp+4]
0x8E13AA: push    esi
0x8E13AB: lea     edx, [ecx+eax*4]
0x8E13AE: push    edi
0x8E13AF: mov     esi, ecx
0x8E13B1: xor     edi, edi
0x8E13B3: cmp     esi, edx
0x8E13B5: mov     [esp+10h+var_4], edx
0x8E13B9: jnb     short loc_8E140B
0x8E13BB: push    ebx
0x8E13BC: lea     esp, [esp+0]
0x8E13C0: movzx   eax, word ptr [esi+2]
0x8E13C4: mov     ebx, [esp+14h+arg_8]
0x8E13C8: mov     ebx, [ebx]
0x8E13CA: mov     eax, [ebx+eax*4]
0x8E13CD: test    eax, eax
0x8E13CF: jl      short loc_8E1403
0x8E13D1: mov     edx, [esi]
0x8E13D3: mov     ebx, [esp+14h+arg_4]
0x8E13D7: mov     [ecx], edx
0x8E13D9: xor     edx, edx
0x8E13DB: mov     dl, [ecx]
0x8E13DD: mov     [ecx+2], ax
0x8E13E1: shl     eax, 4
0x8E13E4: add     ecx, 4
0x8E13E7: and     edx, 1
0x8E13EA: lea     edx, [edx+ebx*2]
0x8E13ED: mov     ebx, ds:0B2FC84h[edx*4]
0x8E13F4: mov     edx, [esp+14h+arg_0]
0x8E13F8: add     eax, ebx
0x8E13FA: mov     [eax+edx], di
0x8E13FE: mov     edx, [esp+14h+var_4]
0x8E1402: inc     edi
0x8E1403: add     esi, 4
0x8E1406: cmp     esi, edx
0x8E1408: jb      short loc_8E13C0
0x8E140A: pop     ebx
0x8E140B: mov     eax, [ebp+8]
0x8E140E: and     eax, 3FFFFFFFh
0x8E1413: cmp     eax, edi
0x8E1415: jge     short loc_8E142B
0x8E1417: add     eax, eax
0x8E1419: cmp     edi, eax
0x8E141B: jl      short loc_8E141F
0x8E141D: mov     eax, edi
0x8E141F: push    4
0x8E1421: push    eax
0x8E1422: push    ebp
0x8E1423: call    sub_8A6E40
0x8E1428: add     esp, 0Ch
0x8E142B: mov     [ebp+4], edi
0x8E142E: pop     edi
0x8E142F: pop     esi
0x8E1430: pop     ebp
0x8E1431: pop     ecx
0x8E1432: retn    0Ch

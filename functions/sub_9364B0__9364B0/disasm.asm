0x9364B0: mov     ecx, [esp+arg_0]
0x9364B4: sar     eax, 4
0x9364B7: push    ebp
0x9364B8: push    esi
0x9364B9: mov     edx, eax
0x9364BB: mov     esi, eax
0x9364BD: shr     edx, 1
0x9364BF: shr     eax, 2
0x9364C2: not     esi
0x9364C4: not     edx
0x9364C6: not     eax
0x9364C8: and     esi, 1
0x9364CB: and     edx, 1
0x9364CE: and     eax, 1
0x9364D1: test    ecx, ecx
0x9364D3: push    edi
0x9364D4: jz      short loc_9364EF
0x9364D6: lea     ecx, [edx+eax*2]
0x9364D9: shl     ecx, 1
0x9364DB: mov     edi, 1
0x9364E0: shl     edi, cl
0x9364E2: mov     ecx, [ebx]
0x9364E4: lea     ebp, [edi+edi]
0x9364E7: test    ecx, ebp
0x9364E9: jnz     short loc_9364EF
0x9364EB: add     ecx, edi
0x9364ED: mov     [ebx], ecx
0x9364EF: mov     edi, [esp+0Ch+arg_0]
0x9364F3: cmp     edi, 1
0x9364F6: jz      short loc_936512
0x9364F8: lea     ecx, [esi+eax*2+4]
0x9364FC: shl     ecx, 1
0x9364FE: mov     eax, 1
0x936503: shl     eax, cl
0x936505: mov     ecx, [ebx]
0x936507: lea     ebp, [eax+eax]
0x93650A: test    ecx, ebp
0x93650C: jnz     short loc_936512
0x93650E: add     ecx, eax
0x936510: mov     [ebx], ecx
0x936512: cmp     edi, 2
0x936515: jz      short loc_936531
0x936517: lea     ecx, [esi+edx*2+8]
0x93651B: shl     ecx, 1
0x93651D: mov     eax, 1
0x936522: shl     eax, cl
0x936524: mov     ecx, [ebx]
0x936526: lea     edx, [eax+eax]
0x936529: test    ecx, edx
0x93652B: jnz     short loc_936531
0x93652D: add     ecx, eax
0x93652F: mov     [ebx], ecx
0x936531: pop     edi
0x936532: pop     esi
0x936533: pop     ebp
0x936534: retn

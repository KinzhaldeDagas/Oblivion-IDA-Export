0x90C460: push    ebx
0x90C461: mov     ebx, [esp+4+arg_0]
0x90C465: push    ebp
0x90C466: push    esi
0x90C467: mov     esi, ecx
0x90C469: xor     eax, eax
0x90C46B: mov     [esi+8], eax
0x90C46E: mov     word ptr [esi+6], 1
0x90C474: mov     dword ptr [esi], offset off_A9C324
0x90C47A: mov     [esi+60h], eax
0x90C47D: mov     [esi+64h], eax
0x90C480: push    edi
0x90C481: mov     dword ptr [esi+68h], 80000000h
0x90C488: mov     eax, [ebx+0Ch]
0x90C48B: lea     edi, [esi+60h]
0x90C48E: mov     [esi+0Ch], eax
0x90C491: mov     ecx, [ebx+10h]
0x90C494: mov     [esi+10h], ecx
0x90C497: mov     edx, [ebx]
0x90C499: lea     eax, [esp+10h+arg_0]
0x90C49D: push    eax
0x90C49E: mov     ecx, ebx
0x90C4A0: call    dword ptr [edx+28h]
0x90C4A3: mov     cl, [eax]
0x90C4A5: mov     ebp, [esi+10h]
0x90C4A8: imul    ebp, [esi+0Ch]
0x90C4AC: mov     [esi+6Ch], cl
0x90C4AF: mov     edx, [ebx+14h]
0x90C4B2: mov     [esi+14h], edx
0x90C4B5: movaps  xmm0, xmmword ptr [ebx+20h]
0x90C4B9: movaps  xmmword ptr [esi+20h], xmm0
0x90C4BD: movaps  xmm0, xmmword ptr [ebx+30h]
0x90C4C1: movaps  xmmword ptr [esi+30h], xmm0
0x90C4C5: movaps  xmm0, xmmword ptr [ebx+40h]
0x90C4C9: movaps  xmmword ptr [esi+40h], xmm0
0x90C4CD: movaps  xmm0, xmmword ptr [ebx+50h]
0x90C4D1: movaps  xmmword ptr [esi+50h], xmm0
0x90C4D5: mov     eax, [edi+8]
0x90C4D8: and     eax, 3FFFFFFFh
0x90C4DD: cmp     eax, ebp
0x90C4DF: jge     short loc_90C4F5
0x90C4E1: add     eax, eax
0x90C4E3: cmp     ebp, eax
0x90C4E5: jl      short loc_90C4E9
0x90C4E7: mov     eax, ebp
0x90C4E9: push    4
0x90C4EB: push    eax
0x90C4EC: push    edi
0x90C4ED: call    sub_8A6E40
0x90C4F2: add     esp, 0Ch
0x90C4F5: mov     [edi+4], ebp
0x90C4F8: mov     eax, [esi+10h]
0x90C4FB: xor     ebp, ebp
0x90C4FD: test    eax, eax
0x90C4FF: jle     short loc_90C541
0x90C501: mov     eax, [esi+0Ch]
0x90C504: xor     edi, edi
0x90C506: test    eax, eax
0x90C508: jle     short loc_90C539
0x90C50A: lea     ebx, [ebx+0]
0x90C510: mov     eax, [esi+0Ch]
0x90C513: mov     ecx, [esi+60h]
0x90C516: imul    eax, ebp
0x90C519: add     eax, edi
0x90C51B: lea     edx, [ecx+eax*4]
0x90C51E: mov     eax, [ebx]
0x90C520: push    ebp
0x90C521: push    edi
0x90C522: mov     ecx, ebx
0x90C524: mov     [esp+18h+arg_0], edx
0x90C528: call    dword ptr [eax+24h]
0x90C52B: mov     ecx, [esp+10h+arg_0]
0x90C52F: inc     edi
0x90C530: fstp    dword ptr [ecx]
0x90C532: mov     eax, [esi+0Ch]
0x90C535: cmp     edi, eax
0x90C537: jl      short loc_90C510
0x90C539: mov     eax, [esi+10h]
0x90C53C: inc     ebp
0x90C53D: cmp     ebp, eax
0x90C53F: jl      short loc_90C501
0x90C541: pop     edi
0x90C542: mov     eax, esi
0x90C544: pop     esi
0x90C545: pop     ebp
0x90C546: pop     ebx
0x90C547: retn    4

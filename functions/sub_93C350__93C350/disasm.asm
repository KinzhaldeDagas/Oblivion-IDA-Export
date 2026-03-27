0x93C350: push    ebp
0x93C351: mov     ebp, esp
0x93C353: and     esp, 0FFFFFFF0h
0x93C356: sub     esp, 94h
0x93C35C: push    ebx
0x93C35D: push    esi
0x93C35E: mov     esi, ecx
0x93C360: mov     eax, [esi+4]
0x93C363: cmp     eax, 3
0x93C366: mov     edx, 4
0x93C36B: push    edi
0x93C36C: mov     [esp+0A0h+var_94], edx
0x93C370: jl      short loc_93C3C7
0x93C372: jle     short loc_93C37E
0x93C374: movaps  xmm0, xmmword ptr [esi+20h]
0x93C378: movaps  xmmword ptr [esi+50h], xmm0
0x93C37C: jmp     short loc_93C3B2
0x93C37E: cmp     dword ptr [esi], 1
0x93C381: jle     short loc_93C3A9
0x93C383: movaps  xmm0, xmmword ptr [esi+30h]
0x93C387: movaps  xmmword ptr [esi+50h], xmm0
0x93C38B: movaps  xmm0, xmmword ptr [esi+0E0h]
0x93C392: movaps  xmmword ptr [esi+110h], xmm0
0x93C399: movaps  xmm0, xmmword ptr [esi+0A0h]
0x93C3A0: movaps  xmmword ptr [esi+0D0h], xmm0
0x93C3A7: jmp     short loc_93C3B2
0x93C3A9: mov     edx, 3
0x93C3AE: mov     [esp+0A0h+var_94], edx
0x93C3B2: movaps  xmm0, xmmword ptr [esi+20h]
0x93C3B6: movaps  xmmword ptr [esi+30h], xmm0
0x93C3BA: movaps  xmm0, xmmword ptr [esi+20h]
0x93C3BE: movaps  xmmword ptr [esi+40h], xmm0
0x93C3C2: jmp     loc_93C469
0x93C3C7: mov     ecx, [esi]
0x93C3C9: cmp     ecx, 3
0x93C3CC: jl      loc_93C460
0x93C3D2: jle     short loc_93C3F2
0x93C3D4: movaps  xmm0, xmmword ptr [esi+0E0h]
0x93C3DB: movaps  xmmword ptr [esi+110h], xmm0
0x93C3E2: movaps  xmm0, xmmword ptr [esi+0A0h]
0x93C3E9: movaps  xmmword ptr [esi+0D0h], xmm0
0x93C3F0: jmp     short loc_93C426
0x93C3F2: cmp     eax, 1
0x93C3F5: jle     short loc_93C41D
0x93C3F7: movaps  xmm0, xmmword ptr [esi+20h]
0x93C3FB: movaps  xmmword ptr [esi+50h], xmm0
0x93C3FF: movaps  xmm0, xmmword ptr [esi+0F0h]
0x93C406: movaps  xmmword ptr [esi+110h], xmm0
0x93C40D: movaps  xmm0, xmmword ptr [esi+0B0h]
0x93C414: movaps  xmmword ptr [esi+0D0h], xmm0
0x93C41B: jmp     short loc_93C426
0x93C41D: mov     edx, 3
0x93C422: mov     [esp+0A0h+var_94], edx
0x93C426: movaps  xmm0, xmmword ptr [esi+0E0h]
0x93C42D: movaps  xmmword ptr [esi+0F0h], xmm0
0x93C434: movaps  xmm0, xmmword ptr [esi+0A0h]
0x93C43B: movaps  xmmword ptr [esi+0B0h], xmm0
0x93C442: movaps  xmm0, xmmword ptr [esi+0E0h]
0x93C449: movaps  xmmword ptr [esi+100h], xmm0
0x93C450: movaps  xmm0, xmmword ptr [esi+0A0h]
0x93C457: movaps  xmmword ptr [esi+0C0h], xmm0
0x93C45E: jmp     short loc_93C469
0x93C460: mov     edx, 1
0x93C465: mov     [esp+0A0h+var_94], edx
0x93C469: test    edx, edx
0x93C46B: jle     short loc_93C499
0x93C46D: lea     ecx, [esp+0A0h+var_40]
0x93C471: lea     eax, [esi+20h]
0x93C474: jmp     short loc_93C480
0x93C476: align 10h
0x93C480: movaps  xmm0, xmmword ptr [eax+80h]
0x93C487: movaps  xmm1, xmmword ptr [eax]
0x93C48A: subps   xmm1, xmm0
0x93C48D: movaps  xmmword ptr [ecx], xmm1
0x93C490: add     eax, 10h
0x93C493: add     ecx, 10h
0x93C496: dec     edx
0x93C497: jnz     short loc_93C480
0x93C499: mov     edi, [ebp+arg_8]
0x93C49C: lea     ecx, [esp+0A0h+var_70]
0x93C4A0: push    ecx; int
0x93C4A1: lea     edx, [esp+0A4h+var_94]
0x93C4A5: push    edx; int
0x93C4A6: mov     edx, [ebp+arg_4]
0x93C4A9: lea     ecx, [esp+0A8h+var_40]
0x93C4AD: push    ecx; int
0x93C4AE: lea     eax, [esi+0E0h]
0x93C4B4: push    eax; int
0x93C4B5: mov     eax, [ebp+arg_0]
0x93C4B8: lea     ebx, [esi+20h]
0x93C4BB: push    ebx; int
0x93C4BC: push    38D1B717h; float
0x93C4C1: push    edi; int
0x93C4C2: push    edx; int
0x93C4C3: push    eax; int
0x93C4C4: call    sub_952B90
0x93C4C9: mov     ecx, [esp+0C4h+var_94]
0x93C4CD: mov     eax, 1
0x93C4D2: add     esp, 24h
0x93C4D5: cmp     ecx, eax
0x93C4D7: jnz     short loc_93C4F6
0x93C4D9: movaps  xmm0, [esp+0A0h+var_70]
0x93C4DE: mov     [esi+4], eax
0x93C4E1: mov     [esi], eax
0x93C4E3: mov     [esi+14h], eax
0x93C4E6: movaps  xmmword ptr [esi+120h], xmm0
0x93C4ED: pop     edi
0x93C4EE: pop     esi
0x93C4EF: pop     ebx
0x93C4F0: mov     esp, ebp
0x93C4F2: pop     ebp
0x93C4F3: retn    0Ch
0x93C4F6: mov     eax, [esi+4Ch]
0x93C4F9: mov     ecx, [esi+3Ch]
0x93C4FC: and     eax, 0C0FFFFFFh
0x93C501: and     ecx, 0C0FFFFFFh
0x93C507: cmp     ecx, eax
0x93C509: mov     dword ptr [esi+4], 3
0x93C510: mov     dword ptr [esi], 3
0x93C516: jz      short loc_93C525
0x93C518: mov     edx, [esi+2Ch]
0x93C51B: and     edx, 0C0FFFFFFh
0x93C521: cmp     edx, eax
0x93C523: jnz     short loc_93C52B
0x93C525: mov     dword ptr [esi], 2
0x93C52B: mov     eax, [esi+2Ch]
0x93C52E: and     eax, 0C0FFFFFFh
0x93C533: cmp     eax, ecx
0x93C535: jnz     short loc_93C54B
0x93C537: mov     edx, [esi]
0x93C539: dec     edx
0x93C53A: mov     eax, edx
0x93C53C: add     eax, 2
0x93C53F: mov     [esi], edx
0x93C541: shl     eax, 4
0x93C544: movaps  xmm0, xmmword ptr [eax+esi]
0x93C548: movaps  xmmword ptr [ebx], xmm0
0x93C54B: mov     eax, [esi+10Ch]
0x93C551: mov     ecx, [esi+0FCh]
0x93C557: and     eax, 0C0FFFFFFh
0x93C55C: and     ecx, 0C0FFFFFFh
0x93C562: cmp     ecx, eax
0x93C564: jz      short loc_93C576
0x93C566: mov     edx, [esi+0ECh]
0x93C56C: and     edx, 0C0FFFFFFh
0x93C572: cmp     edx, eax
0x93C574: jnz     short loc_93C579
0x93C576: dec     dword ptr [esi+4]
0x93C579: mov     eax, [esi+4]
0x93C57C: cmp     eax, 2
0x93C57F: jl      short loc_93C5A6
0x93C581: mov     edx, [esi+0ECh]
0x93C587: and     edx, 0C0FFFFFFh
0x93C58D: cmp     edx, ecx
0x93C58F: jnz     short loc_93C5A6
0x93C591: dec     eax
0x93C592: mov     [esi+4], eax
0x93C595: add     eax, 0Eh
0x93C598: shl     eax, 4
0x93C59B: movaps  xmm0, xmmword ptr [eax+esi]
0x93C59F: movaps  xmmword ptr [esi+0E0h], xmm0
0x93C5A6: movaps  xmm1, xmmword ptr [edi]
0x93C5A9: movaps  xmm2, xmmword ptr [edi+10h]
0x93C5AD: movaps  xmm3, xmmword ptr [edi+20h]
0x93C5B1: movaps  xmm4, xmmword ptr [edi+30h]
0x93C5B5: mov     ecx, [esi+4]
0x93C5B8: lea     ebx, [esi+0A0h]
0x93C5BE: mov     edx, ebx
0x93C5C0: lea     edi, [esi+0E0h]
0x93C5C6: lea     eax, [esi+0E0h]
0x93C5CC: sub     edx, edi
0x93C5CE: mov     edi, edi
0x93C5D0: movaps  xmm0, xmmword ptr [eax]
0x93C5D3: movaps  xmm5, xmm0
0x93C5D6: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x93C5DA: movaps  xmm6, xmm3
0x93C5DD: mulps   xmm6, xmm5
0x93C5E0: movaps  xmm5, xmm0
0x93C5E3: shufps  xmm5, xmm0, 55h ; 'U'
0x93C5E7: movaps  xmm7, xmm2
0x93C5EA: mulps   xmm7, xmm5
0x93C5ED: movaps  xmm5, xmm0
0x93C5F0: shufps  xmm5, xmm0, 0
0x93C5F4: movaps  xmm0, xmm1
0x93C5F7: mulps   xmm0, xmm5
0x93C5FA: addps   xmm6, xmm4
0x93C5FD: addps   xmm0, xmm7
0x93C600: addps   xmm0, xmm6
0x93C603: movaps  xmmword ptr [edx+eax], xmm0
0x93C607: add     eax, 10h
0x93C60A: dec     ecx
0x93C60B: test    ecx, ecx
0x93C60D: jg      short loc_93C5D0
0x93C60F: mov     eax, [esi]
0x93C611: add     eax, [esi+4]
0x93C614: cmp     eax, 4
0x93C617: jle     short loc_93C620
0x93C619: mov     ecx, esi
0x93C61B: call    sub_93B7D0
0x93C620: cmp     dword ptr [esi], 2
0x93C623: jnz     short loc_93C66B
0x93C625: cmp     dword ptr [esi+4], 2
0x93C629: jnz     short loc_93C66B
0x93C62B: movaps  xmm0, xmmword ptr [esi+20h]
0x93C62F: movaps  xmm1, xmmword ptr [esi+30h]
0x93C633: lea     ecx, [esi+130h]
0x93C639: push    ecx
0x93C63A: lea     edx, [esp+0A4h+var_80]
0x93C63E: push    edx
0x93C63F: lea     eax, [esi+20h]
0x93C642: subps   xmm1, xmm0
0x93C645: movaps  xmm0, xmmword ptr [ebx]
0x93C648: push    ebx
0x93C649: lea     ecx, [esp+0ACh+var_90]
0x93C64D: movaps  [esp+0ACh+var_90], xmm1
0x93C652: movaps  xmm1, xmmword ptr [esi+0B0h]
0x93C659: push    ecx
0x93C65A: subps   xmm1, xmm0
0x93C65D: push    eax
0x93C65E: movaps  [esp+0B4h+var_80], xmm1
0x93C663: call    sub_8D1A30
0x93C668: add     esp, 14h
0x93C66B: movaps  xmm0, [esp+0A0h+var_70]
0x93C670: pop     edi
0x93C671: mov     dword ptr [esi+14h], 1
0x93C678: movaps  xmmword ptr [esi+120h], xmm0
0x93C67F: pop     esi
0x93C680: pop     ebx
0x93C681: mov     esp, ebp
0x93C683: pop     ebp
0x93C684: retn    0Ch

0x663740: cmp     dword ptr [ecx+784h], 0
0x663747: push    ebp
0x663748: lea     ebp, [ecx+780h]
0x66374E: jnz     short loc_663756
0x663750: cmp     dword ptr [ebp+0], 0
0x663754: jz      short loc_6637BD
0x663756: push    ebx
0x663757: mov     ebx, ebp
0x663759: test    ebx, ebx
0x66375B: push    edi
0x66375C: mov     edi, ebx
0x66375E: jz      short loc_6637BB
0x663760: push    esi
0x663761: cmp     dword ptr [edi+4], 0
0x663765: jnz     short loc_66376C
0x663767: cmp     dword ptr [edi], 0
0x66376A: jz      short loc_6637BA
0x66376C: mov     esi, [edi]
0x66376E: test    esi, esi
0x663770: jz      short loc_6637B1
0x663772: mov     eax, [esi]
0x663774: mov     edx, [eax+154h]
0x66377A: mov     ecx, esi
0x66377C: call    edx
0x66377E: test    eax, eax
0x663780: jz      short loc_6637B1
0x663782: mov     eax, [esi]
0x663784: mov     edx, [eax+154h]
0x66378A: push    0
0x66378C: push    1
0x66378E: push    1
0x663790: mov     ecx, esi
0x663792: call    edx
0x663794: push    eax
0x663795: call    sub_88CF90
0x66379A: add     esp, 10h
0x66379D: push    esi
0x66379E: mov     ecx, ebp
0x6637A0: call    BSSimpleList_Remove
0x6637A5: and     dword ptr [esi+8], 0FFBFFFFFh
0x6637AC: mov     edi, [ebx+4]
0x6637AF: jmp     short loc_6637B6
0x6637B1: mov     ebx, edi
0x6637B3: mov     edi, [edi+4]
0x6637B6: test    edi, edi
0x6637B8: jnz     short loc_663761
0x6637BA: pop     esi
0x6637BB: pop     edi
0x6637BC: pop     ebx
0x6637BD: pop     ebp
0x6637BE: retn

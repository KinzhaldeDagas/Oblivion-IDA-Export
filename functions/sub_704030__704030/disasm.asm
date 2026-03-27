0x704030: push    ebx
0x704031: mov     ebx, [esp+4+arg_0]
0x704035: push    edi
0x704036: push    ebx
0x704037: mov     edi, ecx
0x704039: call    sub_700A70
0x70403E: test    al, al
0x704040: jnz     short loc_704047
0x704042: pop     edi
0x704043: pop     ebx
0x704044: retn    4
0x704047: push    esi
0x704048: xor     esi, esi
0x70404A: cmp     [edi+26h], si
0x70404E: jbe     short loc_704076
0x704050: mov     eax, [edi+20h]
0x704053: mov     eax, [eax+esi*4]
0x704056: test    eax, eax
0x704058: jz      short loc_70406B
0x70405A: mov     eax, [eax+8]
0x70405D: test    eax, eax
0x70405F: jz      short loc_70406B
0x704061: mov     edx, [eax]
0x704063: mov     ecx, eax
0x704065: mov     eax, [edx+24h]
0x704068: push    ebx
0x704069: call    eax
0x70406B: movzx   ecx, word ptr [edi+26h]
0x70406F: add     esi, 1
0x704072: cmp     esi, ecx
0x704074: jb      short loc_704050
0x704076: mov     eax, [edi+2Ch]
0x704079: test    eax, eax
0x70407B: jz      short loc_7040AE
0x70407D: xor     esi, esi
0x70407F: cmp     [eax+0Ah], si
0x704083: jbe     short loc_7040AE
0x704085: mov     edx, [eax+4]
0x704088: mov     eax, [edx+esi*4]
0x70408B: test    eax, eax
0x70408D: jz      short loc_7040A0
0x70408F: mov     eax, [eax+8]
0x704092: test    eax, eax
0x704094: jz      short loc_7040A0
0x704096: mov     edx, [eax]
0x704098: mov     ecx, eax
0x70409A: mov     eax, [edx+24h]
0x70409D: push    ebx
0x70409E: call    eax
0x7040A0: mov     eax, [edi+2Ch]
0x7040A3: movzx   ecx, word ptr [eax+0Ah]
0x7040A7: add     esi, 1
0x7040AA: cmp     esi, ecx
0x7040AC: jb      short loc_704085
0x7040AE: pop     esi
0x7040AF: pop     edi
0x7040B0: mov     al, 1
0x7040B2: pop     ebx
0x7040B3: retn    4

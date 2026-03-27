0x88A280: push    esi
0x88A281: mov     esi, ecx
0x88A283: mov     eax, [esi+4Ch]
0x88A286: test    eax, eax
0x88A288: jbe     loc_88A30D
0x88A28E: cmp     eax, 0BB8h
0x88A293: jb      short loc_88A29C
0x88A295: mov     dword ptr [esi+4Ch], 0BB8h
0x88A29C: mov     eax, [esi+4Ch]
0x88A29F: push    edi
0x88A2A0: mov     edi, ds:0B2E2F8h
0x88A2A6: cmp     eax, edi
0x88A2A8: jnb     short loc_88A2AC
0x88A2AA: mov     edi, eax
0x88A2AC: sub     eax, edi
0x88A2AE: push    ebx
0x88A2AF: mov     ebx, eax
0x88A2B1: mov     eax, [esi]
0x88A2B3: mov     edx, [eax+58h]
0x88A2B6: call    edx
0x88A2B8: test    eax, eax
0x88A2BA: jz      short loc_88A30B
0x88A2BC: mov     ecx, [esi+48h]
0x88A2BF: lea     edx, [ecx+ebx*4]
0x88A2C2: push    edi
0x88A2C3: push    edx
0x88A2C4: mov     ecx, eax
0x88A2C6: call    sub_89C8E0
0x88A2CB: cmp     ebx, [esi+4Ch]
0x88A2CE: mov     edi, ebx
0x88A2D0: jnb     short loc_88A308
0x88A2D2: mov     eax, [esi+48h]
0x88A2D5: mov     eax, [eax+edi*4]
0x88A2D8: test    eax, eax
0x88A2DA: jz      short loc_88A2E1
0x88A2DC: mov     eax, [eax+0Ch]
0x88A2DF: jmp     short loc_88A2E3
0x88A2E1: xor     eax, eax
0x88A2E3: test    eax, eax
0x88A2E5: jz      short loc_88A2EB
0x88A2E7: and     dword ptr [eax+18h], 0FFFFFFDFh
0x88A2EB: mov     ecx, [esi+48h]
0x88A2EE: mov     ecx, [ecx+edi*4]
0x88A2F1: call    sub_8BC730
0x88A2F6: mov     edx, [esi+48h]
0x88A2F9: mov     dword ptr [edx+edi*4], 0
0x88A300: add     edi, 1
0x88A303: cmp     edi, [esi+4Ch]
0x88A306: jb      short loc_88A2D2
0x88A308: mov     [esi+4Ch], ebx
0x88A30B: pop     ebx
0x88A30C: pop     edi
0x88A30D: pop     esi
0x88A30E: retn

0x88A3A0: push    esi
0x88A3A1: mov     esi, ecx
0x88A3A3: mov     eax, [esi+3Ch]
0x88A3A6: test    eax, eax
0x88A3A8: jbe     loc_88A43E
0x88A3AE: cmp     eax, 64h ; 'd'
0x88A3B1: jb      short loc_88A3BA
0x88A3B3: mov     dword ptr [esi+3Ch], 64h ; 'd'
0x88A3BA: mov     eax, [esi]
0x88A3BC: mov     edx, [eax+58h]
0x88A3BF: push    ebx
0x88A3C0: call    edx
0x88A3C2: mov     ebx, eax
0x88A3C4: test    ebx, ebx
0x88A3C6: jz      short loc_88A43D
0x88A3C8: push    edi
0x88A3C9: xor     edi, edi
0x88A3CB: cmp     [esi+3Ch], edi
0x88A3CE: jbe     short loc_88A41F
0x88A3D0: mov     eax, [esi+38h]
0x88A3D3: cmp     dword ptr [eax+edi*4], 0
0x88A3D7: lea     eax, [eax+edi*4]
0x88A3DA: jz      short loc_88A3EC
0x88A3DC: mov     eax, [eax]
0x88A3DE: cmp     dword ptr [eax+8], 0
0x88A3E2: jz      short loc_88A3EC
0x88A3E4: push    eax
0x88A3E5: mov     ecx, ebx
0x88A3E7: call    sub_89CCC0
0x88A3EC: mov     ecx, [esi+38h]
0x88A3EF: cmp     dword ptr [ecx+edi*4], 0
0x88A3F3: lea     eax, [ecx+edi*4]
0x88A3F6: jz      short loc_88A417
0x88A3F8: mov     ecx, [eax]
0x88A3FA: cmp     word ptr [ecx+4], 0
0x88A3FF: jz      short loc_88A417
0x88A401: add     word ptr [ecx+6], 0FFFFh
0x88A406: movzx   eax, word ptr [ecx+6]
0x88A40A: test    ax, ax
0x88A40D: jnz     short loc_88A417
0x88A40F: mov     edx, [ecx]
0x88A411: mov     eax, [edx]
0x88A413: push    1
0x88A415: call    eax
0x88A417: add     edi, 1
0x88A41A: cmp     edi, [esi+3Ch]
0x88A41D: jb      short loc_88A3D0
0x88A41F: mov     ecx, [esi+3Ch]
0x88A422: mov     edx, [esi+38h]
0x88A425: add     ecx, ecx
0x88A427: add     ecx, ecx
0x88A429: push    ecx
0x88A42A: push    0
0x88A42C: push    edx
0x88A42D: call    __memset
0x88A432: add     esp, 0Ch
0x88A435: mov     dword ptr [esi+3Ch], 0
0x88A43C: pop     edi
0x88A43D: pop     ebx
0x88A43E: pop     esi
0x88A43F: retn

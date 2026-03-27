0x732480: push    esi
0x732481: push    edi
0x732482: mov     edi, [esp+8+arg_0]
0x732486: mov     esi, ecx
0x732488: cmp     esi, edi
0x73248A: jz      short loc_7324FA
0x73248C: mov     ecx, [esi+18h]
0x73248F: test    ecx, ecx
0x732491: jz      short loc_7324A2
0x732493: mov     eax, [ecx]
0x732495: mov     edx, [eax]
0x732497: push    1
0x732499: call    edx
0x73249B: mov     dword ptr [esi+18h], 0
0x7324A2: mov     al, [edi+8]
0x7324A5: mov     ecx, [esi+0Ch]
0x7324A8: mov     [esi+8], al
0x7324AB: mov     dword ptr [esi+10h], 1
0x7324B2: cmp     ecx, [edi+0Ch]
0x7324B5: jz      short loc_7324E2
0x7324B7: mov     edx, [esi+14h]
0x7324BA: push    edx
0x7324BB: call    FormHeapFree
0x7324C0: mov     eax, [edi+0Ch]
0x7324C3: xor     ecx, ecx
0x7324C5: mov     [esi+0Ch], eax
0x7324C8: mov     edx, 4
0x7324CD: mul     edx
0x7324CF: seto    cl
0x7324D2: neg     ecx
0x7324D4: or      ecx, eax
0x7324D6: push    ecx; Size
0x7324D7: call    FormHeapAlloc
0x7324DC: add     esp, 8
0x7324DF: mov     [esi+14h], eax
0x7324E2: mov     eax, [edi+0Ch]
0x7324E5: mov     ecx, [edi+14h]
0x7324E8: mov     edx, [esi+14h]
0x7324EB: add     eax, eax
0x7324ED: add     eax, eax
0x7324EF: push    eax; Size
0x7324F0: push    ecx; Src
0x7324F1: push    edx; Dst
0x7324F2: call    _memcpy
0x7324F7: add     esp, 0Ch
0x7324FA: pop     edi
0x7324FB: mov     eax, esi
0x7324FD: pop     esi
0x7324FE: retn    4

0x5575C0: push    ebx
0x5575C1: mov     ebx, [esp+4+arg_0]
0x5575C5: push    esi
0x5575C6: mov     esi, ecx
0x5575C8: cmp     esi, ebx
0x5575CA: jz      loc_5576D3
0x5575D0: push    ebp
0x5575D1: push    edi; MaxCount
0x5575D2: mov     edi, [ebx+4]
0x5575D5: test    edi, edi
0x5575D7: jz      short loc_5575E2
0x5575D9: mov     ecx, [ebx+8]
0x5575DC: mov     ebp, ecx
0x5575DE: sub     ebp, edi
0x5575E0: jnz     short loc_5575F2
0x5575E2: mov     ecx, esi
0x5575E4: call    sub_556E70
0x5575E9: pop     edi
0x5575EA: pop     ebp
0x5575EB: mov     eax, esi
0x5575ED: pop     esi
0x5575EE: pop     ebx
0x5575EF: retn    4
0x5575F2: mov     eax, [esi+4]
0x5575F5: test    eax, eax
0x5575F7: jnz     short loc_5575FD
0x5575F9: xor     edx, edx
0x5575FB: jmp     short loc_557602
0x5575FD: mov     edx, [esi+8]
0x557600: sub     edx, eax
0x557602: cmp     ebp, edx
0x557604: ja      short loc_557648
0x557606: sub     ecx, edi
0x557608: test    ecx, ecx
0x55760A: jle     short loc_557618
0x55760C: push    ecx; Src
0x55760D: push    edi; Src
0x55760E: push    ecx; DstSize
0x55760F: push    eax; Dst
0x557610: call    _memmove_s
0x557615: add     esp, 10h
0x557618: mov     eax, [ebx+4]
0x55761B: test    eax, eax
0x55761D: jnz     short loc_557632
0x55761F: mov     eax, [esi+4]
0x557622: xor     ebx, ebx
0x557624: add     eax, ebx
0x557626: pop     edi
0x557627: mov     [esi+8], eax
0x55762A: pop     ebp
0x55762B: mov     eax, esi
0x55762D: pop     esi
0x55762E: pop     ebx
0x55762F: retn    4
0x557632: mov     ebx, [ebx+8]
0x557635: sub     ebx, eax
0x557637: mov     eax, [esi+4]
0x55763A: add     eax, ebx
0x55763C: pop     edi
0x55763D: mov     [esi+8], eax
0x557640: pop     ebp
0x557641: mov     eax, esi
0x557643: pop     esi
0x557644: pop     ebx
0x557645: retn    4
0x557648: test    eax, eax
0x55764A: jnz     short loc_557650
0x55764C: xor     ecx, ecx
0x55764E: jmp     short loc_557655
0x557650: mov     ecx, [esi+0Ch]
0x557653: sub     ecx, eax
0x557655: cmp     ebp, ecx
0x557657: ja      short loc_557692
0x557659: test    eax, eax
0x55765B: jnz     short loc_557661
0x55765D: xor     edx, edx
0x55765F: jmp     short loc_557666
0x557661: mov     edx, [esi+8]
0x557664: sub     edx, eax
0x557666: mov     ecx, edi
0x557668: push    eax; Dst
0x557669: lea     edi, [ecx+edx]
0x55766C: push    edi; int
0x55766D: push    ecx; Src
0x55766E: call    sub_556CA0
0x557673: mov     ecx, [esi+8]
0x557676: mov     edx, [ebx+8]
0x557679: add     esp, 0Ch
0x55767C: push    ecx; Dst
0x55767D: push    edx; int
0x55767E: push    edi; Src
0x55767F: mov     ecx, esi
0x557681: call    sub_556CD0
0x557686: pop     edi
0x557687: mov     [esi+8], eax
0x55768A: pop     ebp
0x55768B: mov     eax, esi
0x55768D: pop     esi
0x55768E: pop     ebx
0x55768F: retn    4
0x557692: test    eax, eax
0x557694: jz      short loc_55769F
0x557696: push    eax
0x557697: call    FormHeapFree
0x55769C: add     esp, 4
0x55769F: mov     ecx, [ebx+4]
0x5576A2: test    ecx, ecx
0x5576A4: jnz     short loc_5576AA
0x5576A6: xor     eax, eax
0x5576A8: jmp     short loc_5576AF
0x5576AA: mov     eax, [ebx+8]
0x5576AD: sub     eax, ecx
0x5576AF: push    eax; Size
0x5576B0: mov     ecx, esi
0x5576B2: call    sub_557200
0x5576B7: test    al, al
0x5576B9: jz      short loc_5576D1
0x5576BB: mov     eax, [esi+4]
0x5576BE: mov     ecx, [ebx+8]
0x5576C1: mov     edx, [ebx+4]
0x5576C4: push    eax; Dst
0x5576C5: push    ecx; int
0x5576C6: push    edx; Src
0x5576C7: mov     ecx, esi
0x5576C9: call    sub_556CD0
0x5576CE: mov     [esi+8], eax
0x5576D1: pop     edi
0x5576D2: pop     ebp
0x5576D3: mov     eax, esi
0x5576D5: pop     esi
0x5576D6: pop     ebx
0x5576D7: retn    4

0x7483C0: push    ebx
0x7483C1: push    esi
0x7483C2: mov     esi, [esp+8+arg_0]
0x7483C6: push    edi
0x7483C7: xor     edi, edi
0x7483C9: cmp     byte ptr [esi], 0
0x7483CC: mov     ebx, ecx
0x7483CE: jz      short loc_7483FA
0x7483D0: mov     ecx, [ebx+8]
0x7483D3: push    1
0x7483D5: lea     eax, [esp+10h+arg_0]
0x7483D9: push    eax
0x7483DA: push    1
0x7483DC: push    esi
0x7483DD: push    ebx
0x7483DE: mov     [esp+20h+arg_0], 1
0x7483E6: call    ecx
0x7483E8: add     esp, 14h
0x7483EB: add     esi, 1
0x7483EE: cmp     eax, 1
0x7483F1: jnz     short loc_7483FA
0x7483F3: add     edi, eax
0x7483F5: cmp     byte ptr [esi], 0
0x7483F8: jnz     short loc_7483D0
0x7483FA: mov     eax, edi
0x7483FC: pop     edi
0x7483FD: pop     esi
0x7483FE: pop     ebx
0x7483FF: retn    4

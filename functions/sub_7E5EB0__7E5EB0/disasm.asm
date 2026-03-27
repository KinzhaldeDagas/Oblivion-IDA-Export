0x7E5EB0: push    ebx
0x7E5EB1: mov     ebx, ecx
0x7E5EB3: cmp     dword ptr [ebx+24h], 0
0x7E5EB7: push    esi
0x7E5EB8: push    edi
0x7E5EB9: jz      short loc_7E5EDB
0x7E5EBB: lea     esi, [ebx+94h]
0x7E5EC1: mov     edi, 14h
0x7E5EC6: mov     ecx, [esi]
0x7E5EC8: test    ecx, ecx
0x7E5ECA: jz      short loc_7E5ED3
0x7E5ECC: mov     eax, [ecx]
0x7E5ECE: mov     edx, [eax+5Ch]
0x7E5ED1: call    edx
0x7E5ED3: add     esi, 4
0x7E5ED6: sub     edi, 1
0x7E5ED9: jnz     short loc_7E5EC6
0x7E5EDB: lea     esi, [ebx+134h]
0x7E5EE1: mov     edi, 2
0x7E5EE6: mov     ecx, [esi]
0x7E5EE8: test    ecx, ecx
0x7E5EEA: jz      short loc_7E5EF3
0x7E5EEC: mov     eax, [ecx]
0x7E5EEE: mov     edx, [eax+44h]
0x7E5EF1: call    edx
0x7E5EF3: add     esi, 4
0x7E5EF6: sub     edi, 1
0x7E5EF9: jnz     short loc_7E5EE6
0x7E5EFB: pop     edi
0x7E5EFC: pop     esi
0x7E5EFD: mov     ecx, ebx
0x7E5EFF: pop     ebx
0x7E5F00: jmp     sub_77A4A0

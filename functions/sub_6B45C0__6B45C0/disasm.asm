0x6B45C0: mov     eax, [esp+arg_0]
0x6B45C4: push    ebx
0x6B45C5: push    esi
0x6B45C6: mov     esi, ecx
0x6B45C8: xor     ebx, ebx
0x6B45CA: push    eax
0x6B45CB: mov     [esi+8], ebx
0x6B45CE: call    sub_6B4500
0x6B45D3: test    al, al
0x6B45D5: jnz     short loc_6B45E4
0x6B45D7: mov     [esi+18h], bl
0x6B45DA: mov     [esi+4], ebx
0x6B45DD: mov     eax, esi
0x6B45DF: pop     esi
0x6B45E0: pop     ebx
0x6B45E1: retn    4
0x6B45E4: push    edi
0x6B45E5: push    0D0h ; 'Ð'; Size
0x6B45EA: mov     [esi+14h], ebx
0x6B45ED: mov     [esi+10h], ebx
0x6B45F0: call    FormHeapAlloc
0x6B45F5: mov     edi, eax
0x6B45F7: add     esp, 4
0x6B45FA: cmp     edi, ebx
0x6B45FC: jz      short loc_6B460F
0x6B45FE: push    0D0h ; 'Ð'
0x6B4603: push    ebx
0x6B4604: push    edi
0x6B4605: call    __memset
0x6B460A: add     esp, 0Ch
0x6B460D: jmp     short loc_6B4611
0x6B460F: xor     edi, edi
0x6B4611: mov     ecx, esi
0x6B4613: mov     [esi+4], edi
0x6B4616: call    sub_6B3790
0x6B461B: test    al, al
0x6B461D: setnz   cl
0x6B4620: pop     edi
0x6B4621: mov     [esi+18h], cl
0x6B4624: mov     eax, esi
0x6B4626: pop     esi
0x6B4627: pop     ebx
0x6B4628: retn    4

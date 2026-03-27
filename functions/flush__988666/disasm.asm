0x988666: push    ebx
0x988667: push    esi
0x988668: mov     esi, [esp+8+File]
0x98866C: mov     eax, [esi+0Ch]
0x98866F: mov     ecx, eax
0x988671: and     cl, 3
0x988674: xor     ebx, ebx
0x988676: cmp     cl, 2
0x988679: jnz     short loc_9886BA
0x98867B: test    ax, 108h
0x98867F: jz      short loc_9886BA
0x988681: mov     eax, [esi+8]
0x988684: push    edi
0x988685: mov     edi, [esi]
0x988687: sub     edi, eax
0x988689: test    edi, edi
0x98868B: jle     short loc_9886B9
0x98868D: push    edi; unsigned int
0x98868E: push    eax; void *
0x98868F: push    esi; File
0x988690: call    __fileno
0x988695: pop     ecx
0x988696: push    eax; int
0x988697: call    __write
0x98869C: add     esp, 0Ch
0x98869F: cmp     eax, edi
0x9886A1: jnz     short loc_9886B2
0x9886A3: mov     eax, [esi+0Ch]
0x9886A6: test    al, al
0x9886A8: jns     short loc_9886B9
0x9886AA: and     eax, 0FFFFFFFDh
0x9886AD: mov     [esi+0Ch], eax
0x9886B0: jmp     short loc_9886B9
0x9886B2: or      dword ptr [esi+0Ch], 20h
0x9886B6: or      ebx, 0FFFFFFFFh
0x9886B9: pop     edi
0x9886BA: mov     eax, [esi+8]
0x9886BD: and     dword ptr [esi+4], 0
0x9886C1: mov     [esi], eax
0x9886C3: pop     esi
0x9886C4: mov     eax, ebx
0x9886C6: pop     ebx
0x9886C7: retn

0x9565E0: push    ebx
0x9565E1: push    esi
0x9565E2: mov     esi, ecx
0x9565E4: mov     ebx, [esi+0Ch]
0x9565E7: mov     eax, [esi+8]
0x9565EA: mov     ecx, [esi+10h]
0x9565ED: sub     eax, ebx
0x9565EF: mov     ebx, [esp+8+arg_4]
0x9565F3: mov     [eax+ecx-1], bl
0x9565F7: mov     edx, [esi+0Ch]
0x9565FA: mov     ecx, [esi+8]
0x9565FD: inc     edx
0x9565FE: mov     eax, edx
0x956600: cmp     eax, ecx
0x956602: mov     [esi+0Ch], edx
0x956605: jl      short loc_95660E
0x956607: mov     ecx, esi
0x956609: call    sub_9564D0
0x95660E: mov     eax, [esi+0Ch]
0x956611: mov     edx, [esi+8]
0x956614: sub     edx, eax
0x956616: mov     eax, [esi+10h]
0x956619: sar     ebx, 8
0x95661C: mov     [edx+eax-1], bl
0x956620: mov     edx, [esi+0Ch]
0x956623: mov     ecx, [esi+8]
0x956626: inc     edx
0x956627: mov     eax, edx
0x956629: cmp     eax, ecx
0x95662B: mov     [esi+0Ch], edx
0x95662E: jl      short loc_956637
0x956630: mov     ecx, esi
0x956632: call    sub_9564D0
0x956637: mov     ebx, [esi+0Ch]
0x95663A: mov     ecx, [esi+8]
0x95663D: mov     edx, [esi+10h]
0x956640: mov     al, [esp+8+arg_0]
0x956644: sub     ecx, ebx
0x956646: mov     [ecx+edx-1], al
0x95664A: mov     edx, [esi+0Ch]
0x95664D: mov     ecx, [esi+8]
0x956650: inc     edx
0x956651: mov     eax, edx
0x956653: cmp     eax, ecx
0x956655: mov     [esi+0Ch], edx
0x956658: jl      short loc_956661
0x95665A: mov     ecx, esi
0x95665C: call    sub_9564D0
0x956661: pop     esi
0x956662: pop     ebx
0x956663: retn    8

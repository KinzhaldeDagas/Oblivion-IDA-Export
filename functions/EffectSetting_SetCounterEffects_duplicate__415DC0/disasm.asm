0x415DC0: push    ebx
0x415DC1: push    esi
0x415DC2: mov     esi, ecx
0x415DC4: cmp     word ptr [esi+6Ch], 0
0x415DC9: jle     short loc_415DEC
0x415DCB: mov     eax, [esi+9Ch]
0x415DD1: push    eax; void *
0x415DD2: mov     ecx, offset FormHeap
0x415DD7: call    MemoryHeap_Free_checked
0x415DDC: mov     dword ptr [esi+9Ch], 0
0x415DE6: mov     word ptr [esi+6Ch], 0
0x415DEC: mov     bx, [esp+8+arg_0]
0x415DF1: test    bx, bx
0x415DF4: jbe     short loc_415E44
0x415DF6: push    edi
0x415DF7: movzx   edi, bx
0x415DFA: push    1
0x415DFC: lea     ecx, ds:0[edi*4]
0x415E03: push    ecx
0x415E04: mov     ecx, offset FormHeap
0x415E09: call    j_MemoryHeap_Alloc
0x415E0E: test    eax, eax
0x415E10: mov     [esi+9Ch], eax
0x415E16: jz      short loc_415E43
0x415E18: xor     eax, eax
0x415E1A: test    edi, edi
0x415E1C: mov     [esi+6Ch], bx
0x415E20: jle     short loc_415E43
0x415E22: mov     ecx, [esp+0Ch+arg_4]
0x415E26: jmp     short loc_415E30
0x415E28: align 10h
0x415E30: mov     ebx, [ecx+eax*4]
0x415E33: mov     edx, [esi+9Ch]
0x415E39: mov     [edx+eax*4], ebx
0x415E3C: add     eax, 1
0x415E3F: cmp     eax, edi
0x415E41: jl      short loc_415E30
0x415E43: pop     edi
0x415E44: pop     esi
0x415E45: pop     ebx
0x415E46: retn    8

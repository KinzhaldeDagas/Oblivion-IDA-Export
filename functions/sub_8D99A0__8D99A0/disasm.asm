0x8D99A0: mov     dl, [esp+arg_C]
0x8D99A4: push    ebx
0x8D99A5: xor     ebx, ebx
0x8D99A7: push    esi
0x8D99A8: mov     esi, ecx
0x8D99AA: mov     ecx, [esp+8+arg_8]
0x8D99AE: mov     eax, 1
0x8D99B3: mov     [esi+0Ch], ecx
0x8D99B6: mov     ecx, [esp+8+arg_0]
0x8D99BA: mov     [esi+6], ax
0x8D99BE: mov     dword ptr [esi], offset off_A9A274
0x8D99C4: mov     [esi+8], ebx
0x8D99C7: mov     [esi+18h], dl
0x8D99CA: mov     edx, [esp+8+arg_4]
0x8D99CE: mov     [esi+19h], bl
0x8D99D1: mov     [esi+14h], edx
0x8D99D4: cmp     [esp+8+arg_10], eax
0x8D99D8: mov     [esi+1Ch], ebx
0x8D99DB: mov     [esi+20h], ebx
0x8D99DE: mov     [esi+24h], ebx
0x8D99E1: mov     [esi+10h], ecx
0x8D99E4: jnz     short loc_8D9A04
0x8D99E6: call    sub_8BC720
0x8D99EB: mov     ecx, [esi+14h]
0x8D99EE: cmp     ecx, ebx
0x8D99F0: jz      short loc_8D99F7
0x8D99F2: call    sub_8BC720
0x8D99F7: mov     eax, [esi+0Ch]
0x8D99FA: cmp     [eax+4], bx
0x8D99FE: jz      short loc_8D9A04
0x8D9A00: inc     word ptr [eax+6]
0x8D9A04: mov     eax, esi
0x8D9A06: pop     esi
0x8D9A07: pop     ebx
0x8D9A08: retn    14h

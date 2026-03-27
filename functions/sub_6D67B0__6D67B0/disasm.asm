0x6D67B0: push    ebx
0x6D67B1: push    esi
0x6D67B2: push    edi
0x6D67B3: mov     edi, [esp+0Ch+arg_0]
0x6D67B7: push    edi
0x6D67B8: mov     esi, ecx
0x6D67BA: call    sub_6EC2B0
0x6D67BF: push    edi
0x6D67C0: lea     ecx, [esi+0Ch]
0x6D67C3: call    sub_6CB990
0x6D67C8: mov     ecx, edi
0x6D67CA: call    sub_712A90
0x6D67CF: mov     edi, [esi+2Ch]
0x6D67D2: mov     ebx, eax
0x6D67D4: cmp     edi, ebx
0x6D67D6: jz      short loc_6D6809
0x6D67D8: test    edi, edi
0x6D67DA: jz      short loc_6D67F8
0x6D67DC: lea     eax, [edi+4]
0x6D67DF: push    eax; lpAddend
0x6D67E0: call    dword ptr ds:0A2807Ch
0x6D67E6: test    eax, eax
0x6D67E8: jnz     short loc_6D67F8
0x6D67EA: test    edi, edi
0x6D67EC: jz      short loc_6D67F8
0x6D67EE: mov     edx, [edi]
0x6D67F0: mov     eax, [edx]
0x6D67F2: push    1
0x6D67F4: mov     ecx, edi
0x6D67F6: call    eax
0x6D67F8: test    ebx, ebx
0x6D67FA: mov     [esi+2Ch], ebx
0x6D67FD: jz      short loc_6D6809
0x6D67FF: add     ebx, 4
0x6D6802: push    ebx; lpAddend
0x6D6803: call    dword ptr ds:0A28078h
0x6D6809: pop     edi
0x6D680A: pop     esi
0x6D680B: pop     ebx
0x6D680C: retn    4

0x5C0FC0: push    ebx
0x5C0FC1: push    ebp
0x5C0FC2: push    esi
0x5C0FC3: push    edi
0x5C0FC4: mov     esi, offset quickKeyList_ptr
0x5C0FC9: mov     ebp, 8
0x5C0FCE: xor     ebx, ebx
0x5C0FD0: mov     edi, [esi+4]
0x5C0FD3: cmp     edi, ebx
0x5C0FD5: jz      short loc_5C0FE9
0x5C0FD7: mov     edx, [esi]
0x5C0FD9: mov     eax, edi
0x5C0FDB: mov     edi, [edi]
0x5C0FDD: push    eax
0x5C0FDE: mov     eax, [edx+8]
0x5C0FE1: mov     ecx, esi
0x5C0FE3: call    eax
0x5C0FE5: cmp     edi, ebx
0x5C0FE7: jnz     short loc_5C0FD7
0x5C0FE9: mov     [esi+0Ch], ebx
0x5C0FEC: mov     [esi+4], ebx
0x5C0FEF: mov     [esi+8], ebx
0x5C0FF2: add     esi, 10h
0x5C0FF5: sub     ebp, 1
0x5C0FF8: jnz     short loc_5C0FD0
0x5C0FFA: pop     edi
0x5C0FFB: pop     esi
0x5C0FFC: pop     ebp
0x5C0FFD: pop     ebx
0x5C0FFE: retn

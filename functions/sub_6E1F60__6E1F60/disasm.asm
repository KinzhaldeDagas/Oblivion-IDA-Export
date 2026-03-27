0x6E1F60: push    ebx
0x6E1F61: push    esi
0x6E1F62: mov     esi, ecx
0x6E1F64: mov     eax, [esi+28h]
0x6E1F67: xor     ebx, ebx
0x6E1F69: cmp     eax, ebx
0x6E1F6B: jz      short loc_6E1F7D
0x6E1F6D: mov     ecx, [esi+18h]
0x6E1F70: mov     edx, ds:0B3D2C8h[ecx*4]
0x6E1F77: push    eax
0x6E1F78: call    edx ; dword_B3D2C8
0x6E1F7A: add     esp, 4
0x6E1F7D: mov     ecx, [esp+8+arg_0]
0x6E1F81: cmp     ecx, ebx
0x6E1F83: jz      short loc_6E1FA9
0x6E1F85: mov     eax, [esp+8+arg_4]
0x6E1F89: cmp     eax, ebx
0x6E1F8B: jz      short loc_6E1FA9
0x6E1F8D: mov     [esi+0Ch], ax
0x6E1F91: mov     eax, [esp+8+arg_8]
0x6E1F95: mov     [esi+28h], ecx
0x6E1F98: mov     [esi+18h], eax
0x6E1F9B: mov     al, ds:byte_B3D3E8[eax]
0x6E1FA1: mov     [esi+1Eh], al
0x6E1FA4: pop     esi
0x6E1FA5: pop     ebx
0x6E1FA6: retn    0Ch
0x6E1FA9: mov     [esi+0Ch], bx
0x6E1FAD: mov     [esi+28h], ebx
0x6E1FB0: mov     [esi+1Eh], bl
0x6E1FB3: mov     [esi+18h], ebx
0x6E1FB6: pop     esi
0x6E1FB7: pop     ebx
0x6E1FB8: retn    0Ch

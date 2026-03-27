0x8DBBE0: push    ebx
0x8DBBE1: mov     ebx, ecx
0x8DBBE3: mov     eax, [ebx+4]
0x8DBBE6: push    edi
0x8DBBE7: xor     edi, edi
0x8DBBE9: test    eax, eax
0x8DBBEB: jle     short loc_8DBC2A
0x8DBBED: push    esi
0x8DBBEE: mov     esi, [esp+0Ch+arg_0]
0x8DBBF2: mov     eax, [ebx]
0x8DBBF4: cmp     byte ptr [edi+eax], 0FFh
0x8DBBF8: jz      short loc_8DBC21
0x8DBBFA: mov     ecx, [esi+8]
0x8DBBFD: mov     eax, [esi+4]
0x8DBC00: and     ecx, 3FFFFFFFh
0x8DBC06: cmp     eax, ecx
0x8DBC08: jnz     short loc_8DBC15
0x8DBC0A: push    2
0x8DBC0C: push    esi
0x8DBC0D: call    sub_8A6EE0
0x8DBC12: add     esp, 8
0x8DBC15: mov     edx, [esi+4]
0x8DBC18: mov     eax, [esi]
0x8DBC1A: mov     [eax+edx*2], di
0x8DBC1E: inc     dword ptr [esi+4]
0x8DBC21: mov     eax, [ebx+4]
0x8DBC24: inc     edi
0x8DBC25: cmp     edi, eax
0x8DBC27: jl      short loc_8DBBF2
0x8DBC29: pop     esi
0x8DBC2A: pop     edi
0x8DBC2B: pop     ebx
0x8DBC2C: retn    4

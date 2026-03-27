0x53FD20: push    esi
0x53FD21: mov     esi, ecx
0x53FD23: call    dword ptr ds:0A280D0h
0x53FD29: mov     edx, [esi+0Ch]
0x53FD2C: mov     ecx, edx
0x53FD2E: and     ecx, 7FFFFFFFh
0x53FD34: cmp     ecx, 80000000h
0x53FD3A: jbe     short loc_53FD41
0x53FD3C: mov     ecx, 80000000h
0x53FD41: cmp     eax, ecx
0x53FD43: jbe     short loc_53FD5D
0x53FD45: mov     ecx, [esp+4+arg_0]
0x53FD49: add     eax, ecx
0x53FD4B: xor     eax, edx
0x53FD4D: and     eax, 7FFFFFFFh
0x53FD52: xor     eax, edx
0x53FD54: mov     [esi+0Ch], eax
0x53FD57: mov     al, 1
0x53FD59: pop     esi
0x53FD5A: retn    4
0x53FD5D: xor     al, al
0x53FD5F: pop     esi
0x53FD60: retn    4

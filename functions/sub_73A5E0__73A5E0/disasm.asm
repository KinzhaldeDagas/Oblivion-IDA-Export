0x73A5E0: push    ebx
0x73A5E1: mov     ebx, [esp+4+a2]
0x73A5E5: push    esi
0x73A5E6: mov     esi, ecx
0x73A5E8: mov     edx, [esi+8]
0x73A5EB: xor     eax, eax
0x73A5ED: test    edx, edx
0x73A5EF: push    edi
0x73A5F0: jbe     short loc_73A60B
0x73A5F2: mov     edi, [ebx]
0x73A5F4: mov     ecx, [esi]
0x73A5F6: cmp     [ecx], edi
0x73A5F8: jz      short loc_73A606
0x73A5FA: add     eax, 1
0x73A5FD: add     ecx, 4
0x73A600: cmp     eax, edx
0x73A602: jb      short loc_73A5F6
0x73A604: jmp     short loc_73A60B
0x73A606: cmp     eax, 0FFFFFFFFh
0x73A609: jnz     short loc_73A635
0x73A60B: mov     eax, [esi+4]
0x73A60E: cmp     edx, eax
0x73A610: jnz     short loc_73A627
0x73A612: test    eax, eax
0x73A614: jbe     short loc_73A61A
0x73A616: add     eax, eax
0x73A618: jmp     short loc_73A61F
0x73A61A: mov     eax, 1
0x73A61F: push    eax
0x73A620: mov     ecx, esi
0x73A622: call    sub_6E8CA0
0x73A627: mov     eax, [esi+8]
0x73A62A: mov     edx, [ebx]
0x73A62C: mov     ecx, [esi]
0x73A62E: mov     [ecx+eax*4], edx
0x73A631: add     dword ptr [esi+8], 1
0x73A635: pop     edi
0x73A636: pop     esi
0x73A637: pop     ebx
0x73A638: retn    4

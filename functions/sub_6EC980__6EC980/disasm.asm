0x6EC980: push    ebx
0x6EC981: push    esi
0x6EC982: mov     esi, [esp+8+arg_0]
0x6EC986: push    edi
0x6EC987: push    esi
0x6EC988: mov     edi, ecx
0x6EC98A: call    sub_715E70
0x6EC98F: mov     ecx, esi
0x6EC991: call    sub_7124A0
0x6EC996: mov     esi, [edi+40h]
0x6EC999: mov     ebx, eax
0x6EC99B: cmp     esi, ebx
0x6EC99D: jz      short loc_6EC9D0
0x6EC99F: test    esi, esi
0x6EC9A1: jz      short loc_6EC9BF
0x6EC9A3: lea     eax, [esi+4]
0x6EC9A6: push    eax; lpAddend
0x6EC9A7: call    dword ptr ds:0A2807Ch
0x6EC9AD: test    eax, eax
0x6EC9AF: jnz     short loc_6EC9BF
0x6EC9B1: test    esi, esi
0x6EC9B3: jz      short loc_6EC9BF
0x6EC9B5: mov     edx, [esi]
0x6EC9B7: mov     eax, [edx]
0x6EC9B9: push    1
0x6EC9BB: mov     ecx, esi
0x6EC9BD: call    eax
0x6EC9BF: test    ebx, ebx
0x6EC9C1: mov     [edi+40h], ebx
0x6EC9C4: jz      short loc_6EC9D0
0x6EC9C6: add     ebx, 4
0x6EC9C9: push    ebx; lpAddend
0x6EC9CA: call    dword ptr ds:0A28078h
0x6EC9D0: pop     edi
0x6EC9D1: pop     esi
0x6EC9D2: pop     ebx
0x6EC9D3: retn    4
